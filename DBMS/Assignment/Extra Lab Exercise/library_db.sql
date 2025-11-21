-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Nov 20, 2025 at 12:08 PM
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
  `author_id` int(11) DEFAULT NULL
) ;

--
-- Dumping data for table `books`
--

INSERT INTO `books` (`book_id`, `title`, `author`, `publisher`, `year_of_publication`, `price`, `genre`, `author_id`) VALUES
(2, 'Lord of Rings', 'J.R.R. Tolkien', 'Allen & Unwin', '1954', 660.00, 'Fantasy', 2),
(3, 'The Alchemist', 'Paulo Coelho', 'HarperCollins', '1990', 330.00, 'Fiction', 3),
(4, 'Pride & Prejudice', 'Jane Austen', 'T. Egerton', '2020', 250.00, 'Romance', 1),
(5, 'Inferno', 'Dan Brown', 'Doubleday', '2013', 495.00, 'Thriller', 2),
(201, 'Book A', 'Author A', 'Publisher A', '2018', 250.00, NULL, NULL),
(202, 'Book B', 'Author B', 'Publisher B', '2020', 300.00, NULL, NULL);

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
-- Indexes for table `members`
--
ALTER TABLE `members`
  ADD PRIMARY KEY (`member_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
