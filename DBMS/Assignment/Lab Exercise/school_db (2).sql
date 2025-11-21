-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Nov 21, 2025 at 09:16 AM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `school_db`
--

DELIMITER $$
--
-- Procedures
--
CREATE DEFINER=`root`@`localhost` PROCEDURE `check_department` (IN `p_emp_id` INT)   BEGIN
    DECLARE v_dept INT;

    SELECT dept_id INTO v_dept
    FROM employees
    WHERE emp_id = p_emp_id;

    IF v_dept = 2 THEN
        SELECT 'Employee belongs to Department 2' AS message;
    ELSE
        SELECT 'Employee does NOT belong to Department 2' AS message;
    END IF;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetCourseDetails` (IN `c_id` INT)   BEGIN
    SELECT course_id, course_name, course_duration
    FROM courses
    WHERE course_id = c_id;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetEmployeesByDepartment` (IN `dept` INT)   BEGIN
    SELECT emp_id, emp_name, dept_id
    FROM employees
    WHERE dept_id = dept;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `show_employee_names` ()   BEGIN
    DECLARE done INT DEFAULT 0;
    DECLARE v_name VARCHAR(50);

    DECLARE emp_cursor CURSOR FOR
        SELECT emp_name FROM employees;

    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = 1;

    OPEN emp_cursor;

    read_loop: LOOP
        FETCH emp_cursor INTO v_name;
        IF done = 1 THEN
            LEAVE read_loop;
        END IF;

        SELECT v_name AS employee_name;
    END LOOP;

    CLOSE emp_cursor;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `total_employees` ()   BEGIN
    SELECT COUNT(*) AS total_employees FROM employees;
END$$

DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `courses`
--

CREATE TABLE `courses` (
  `course_id` int(11) NOT NULL,
  `course_name` varchar(100) DEFAULT NULL,
  `course_duration` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `courses`
--

INSERT INTO `courses` (`course_id`, `course_name`, `course_duration`) VALUES
(101, 'Computer Science Basics', '3 Months'),
(102, 'Database Management', '3.5 Months'),
(104, 'Cyber Security', '2 Months'),
(105, 'Data Analytics', '3 Months');

-- --------------------------------------------------------

--
-- Table structure for table `departments`
--

CREATE TABLE `departments` (
  `dept_id` int(11) NOT NULL,
  `dept_name` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `departments`
--

INSERT INTO `departments` (`dept_id`, `dept_name`) VALUES
(1, 'HR'),
(2, 'Finance'),
(3, 'IT');

-- --------------------------------------------------------

--
-- Table structure for table `employees`
--

CREATE TABLE `employees` (
  `emp_id` int(11) NOT NULL,
  `emp_name` varchar(50) DEFAULT NULL,
  `dept_id` int(11) DEFAULT NULL,
  `salary` int(11) DEFAULT NULL,
  `last_modified` timestamp NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employees`
--

INSERT INTO `employees` (`emp_id`, `emp_name`, `dept_id`, `salary`, `last_modified`) VALUES
(101, 'Anita', 1, 55000, '2025-11-19 14:21:02'),
(102, 'Rahul', 2, 45000, '2025-11-19 14:21:02'),
(103, 'Meera', 3, 50000, '2025-11-19 14:21:02'),
(107, 'Suresh', 2, 48000, '2025-11-19 14:21:02');

--
-- Triggers `employees`
--
DELIMITER $$
CREATE TRIGGER `log_new_employee` AFTER INSERT ON `employees` FOR EACH ROW BEGIN
    INSERT INTO employee_log (emp_id, emp_name, action_performed)
    VALUES (NEW.emp_id, NEW.emp_name, 'INSERT');
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `update_last_modified` BEFORE UPDATE ON `employees` FOR EACH ROW BEGIN
    SET NEW.last_modified = CURRENT_TIMESTAMP;
END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Stand-in structure for view `employee_department_view`
-- (See below for the actual view)
--
CREATE TABLE `employee_department_view` (
`emp_id` int(11)
,`emp_name` varchar(50)
,`salary` int(11)
,`dept_name` varchar(50)
);

-- --------------------------------------------------------

--
-- Table structure for table `employee_log`
--

CREATE TABLE `employee_log` (
  `log_id` int(11) NOT NULL,
  `emp_id` int(11) DEFAULT NULL,
  `emp_name` varchar(50) DEFAULT NULL,
  `action_performed` varchar(20) DEFAULT NULL,
  `log_time` timestamp NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Structure for view `employee_department_view`
--
DROP TABLE IF EXISTS `employee_department_view`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `employee_department_view`  AS SELECT `e`.`emp_id` AS `emp_id`, `e`.`emp_name` AS `emp_name`, `e`.`salary` AS `salary`, `d`.`dept_name` AS `dept_name` FROM (`employees` `e` join `departments` `d` on(`e`.`dept_id` = `d`.`dept_id`)) WHERE `e`.`salary` >= 50000 ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `courses`
--
ALTER TABLE `courses`
  ADD PRIMARY KEY (`course_id`);

--
-- Indexes for table `departments`
--
ALTER TABLE `departments`
  ADD PRIMARY KEY (`dept_id`);

--
-- Indexes for table `employees`
--
ALTER TABLE `employees`
  ADD PRIMARY KEY (`emp_id`),
  ADD KEY `dept_id` (`dept_id`);

--
-- Indexes for table `employee_log`
--
ALTER TABLE `employee_log`
  ADD PRIMARY KEY (`log_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `employee_log`
--
ALTER TABLE `employee_log`
  MODIFY `log_id` int(11) NOT NULL AUTO_INCREMENT;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `employees`
--
ALTER TABLE `employees`
  ADD CONSTRAINT `employees_ibfk_1` FOREIGN KEY (`dept_id`) REFERENCES `departments` (`dept_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
