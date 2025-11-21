-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Nov 20, 2025 at 01:20 PM
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
-- Database: `library_db`
--

DELIMITER $$
--
-- Procedures
--
CREATE DEFINER=`root`@`localhost` PROCEDURE `GetBookPrice` (IN `p_book_id` INT)   BEGIN
    SELECT price
    FROM books
    WHERE book_id = p_book_id;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetBooksByAuthor` (IN `authorName` VARCHAR(100))   BEGIN
    SELECT book_id, title, author, publisher, year_of_publication, price FROM books
    WHERE author = authorName;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `insert_book` ()   BEGIN
    DECLARE v_book_id INT DEFAULT 6;
    DECLARE v_title VARCHAR(100) DEFAULT 'The Great Gatsby';
    DECLARE v_author VARCHAR(50) DEFAULT 'F. Scott Fitzgerald';
    DECLARE v_publisher VARCHAR(50) DEFAULT 'Scribner';
    DECLARE v_year INT DEFAULT 1925;
    DECLARE v_price DECIMAL(10,2) DEFAULT 450;

    -- Insert the new book
    INSERT INTO books(book_id, title, author, publisher, year_of_publication, price)
    VALUES(v_book_id, v_title, v_author, v_publisher, v_year, v_price);

    -- Display confirmation
    SELECT CONCAT('Book "', v_title, '" inserted successfully.') AS message;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `total_books` ()   BEGIN
    DECLARE v_total_books INT;

    -- Count total books
    SELECT COUNT(*) INTO v_total_books FROM books;

    -- Display total
    SELECT CONCAT('Total number of books: ', v_total_books) AS message;
END$$

DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `authors`
--

CREATE TABLE `authors` (
  `author_id` int(11) NOT NULL,
  `first_name` varchar(50) DEFAULT NULL,
  `last_name` varchar(50) DEFAULT NULL,
  `country` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `authors`
--

INSERT INTO `authors` (`author_id`, `first_name`, `last_name`, `country`) VALUES
(1, 'George', 'Orwell', 'United Kingdom'),
(2, 'Mark', 'Johnson', 'United States'),
(3, 'Agatha', 'Christie', 'United Kingdom');

-- --------------------------------------------------------

--
-- Table structure for table `books`
--

CREATE TABLE `books` (
  `book_id` int(11) NOT NULL,
  `title` varchar(100) DEFAULT NULL,
  `author` varchar(50) DEFAULT NULL,
  `publisher` varchar(50) DEFAULT NULL,
  `year_of_publication` year(4) DEFAULT NULL,
  `price` decimal(6,2) DEFAULT NULL,
  `genre` varchar(50) DEFAULT NULL,
  `author_id` int(11) DEFAULT NULL,
  `last_modified` timestamp NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp()
) ;

--
-- Dumping data for table `books`
--

INSERT INTO `books` (`book_id`, `title`, `author`, `publisher`, `year_of_publication`, `price`, `genre`, `author_id`, `last_modified`) VALUES
(2, 'Lord of Rings', 'J.R.R. Tolkien', 'Allen & Unwin', '1954', 660.00, 'Fantasy', 2, '2025-11-20 11:49:55'),
(3, 'The Alchemist', 'Paulo Coelho', 'HarperCollins', '1990', 330.00, 'Fiction', 3, '2025-11-20 11:49:55'),
(4, 'Pride & Prejudice', 'Jane Austen', 'T. Egerton', '2020', 250.00, 'Romance', 1, '2025-11-20 11:49:55'),
(5, 'Inferno', 'Dan Brown', 'Doubleday', '2013', 495.00, 'Thriller', 2, '2025-11-20 11:49:55'),
(6, 'The Great Gatsby', 'F. Scott Fitzgerald', 'Scribner', '1925', 450.00, NULL, NULL, '2025-11-20 12:13:44'),
(201, 'Book A', 'Author A', 'Publisher A', '2018', 250.00, NULL, NULL, '2025-11-20 11:49:55'),
(202, 'Book B', 'Author B', 'Publisher B', '2020', 300.00, NULL, NULL, '2025-11-20 11:49:55');

--
-- Triggers `books`
--
DELIMITER $$
CREATE TRIGGER `log_books_deletion` AFTER DELETE ON `books` FOR EACH ROW BEGIN
    INSERT INTO log_changes(book_id, title, operation)
    VALUES (OLD.book_id, OLD.title, 'DELETE');
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `update_books_timestamp` BEFORE UPDATE ON `books` FOR EACH ROW BEGIN
    SET NEW.last_modified = NOW();
END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Stand-in structure for view `book_summary`
-- (See below for the actual view)
--
CREATE TABLE `book_summary` (
`title` varchar(100)
,`author` varchar(50)
,`price` decimal(6,2)
);

-- --------------------------------------------------------

--
-- Table structure for table `log_changes`
--

CREATE TABLE `log_changes` (
  `log_id` int(11) NOT NULL,
  `book_id` int(11) DEFAULT NULL,
  `title` varchar(100) DEFAULT NULL,
  `operation` varchar(10) DEFAULT NULL,
  `change_time` timestamp NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `members`
--

CREATE TABLE `members` (
  `member_id` int(11) NOT NULL,
  `member_name` varchar(50) DEFAULT NULL,
  `date_of_membership` date DEFAULT NULL,
  `email` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `members`
--

INSERT INTO `members` (`member_id`, `member_name`, `date_of_membership`, `email`) VALUES
(1, 'Alice', '2025-01-10', 'alice@example.com'),
(2, 'Bob', '2025-02-15', 'bob@example.com'),
(3, 'Charlie', '2025-03-20', 'charlie@example.com'),
(4, 'David', '2025-04-25', 'david@example.com'),
(5, 'Eva', '2025-05-30', 'eva@example.com');

-- --------------------------------------------------------

--
-- Table structure for table `members_backup`
--

CREATE TABLE `members_backup` (
  `member_id` int(11) NOT NULL,
  `member_name` varchar(50) DEFAULT NULL,
  `date_of_membership` date DEFAULT NULL,
  `email` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `members_backup`
--

INSERT INTO `members_backup` (`member_id`, `member_name`, `date_of_membership`, `email`) VALUES
(1, 'Alice', '2025-01-10', 'alice@example.com'),
(2, 'Bob', '2025-02-15', 'bob@example.com'),
(3, 'Charlie', '2025-03-20', 'charlie@example.com'),
(4, 'David', '2025-04-25', 'david@example.com'),
(5, 'Eva', '2025-05-30', 'eva@example.com');

-- --------------------------------------------------------

--
-- Stand-in structure for view `members_before_2020`
-- (See below for the actual view)
--
CREATE TABLE `members_before_2020` (
`member_id` int(11)
,`member_name` varchar(50)
,`date_of_membership` date
,`email` varchar(50)
);

-- --------------------------------------------------------

--
-- Structure for view `book_summary`
--
DROP TABLE IF EXISTS `book_summary`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `book_summary`  AS SELECT `books`.`title` AS `title`, `books`.`author` AS `author`, `books`.`price` AS `price` FROM `books` ;

-- --------------------------------------------------------

--
-- Structure for view `members_before_2020`
--
DROP TABLE IF EXISTS `members_before_2020`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `members_before_2020`  AS SELECT `members`.`member_id` AS `member_id`, `members`.`member_name` AS `member_name`, `members`.`date_of_membership` AS `date_of_membership`, `members`.`email` AS `email` FROM `members` WHERE year(`members`.`date_of_membership`) < 2020 ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `authors`
--
ALTER TABLE `authors`
  ADD PRIMARY KEY (`author_id`);

--
-- Indexes for table `books`
--
ALTER TABLE `books`
  ADD PRIMARY KEY (`book_id`);

--
-- Indexes for table `log_changes`
--
ALTER TABLE `log_changes`
  ADD PRIMARY KEY (`log_id`);

--
-- Indexes for table `members`
--
ALTER TABLE `members`
  ADD PRIMARY KEY (`member_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `log_changes`
--
ALTER TABLE `log_changes`
  MODIFY `log_id` int(11) NOT NULL AUTO_INCREMENT;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
