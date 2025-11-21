-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Nov 19, 2025 at 03:39 PM
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

--
-- Indexes for dumped tables
--

--
-- Indexes for table `employees`
--
ALTER TABLE `employees`
  ADD PRIMARY KEY (`emp_id`),
  ADD KEY `dept_id` (`dept_id`);

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
