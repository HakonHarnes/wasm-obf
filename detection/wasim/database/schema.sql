CREATE DATABASE  IF NOT EXISTS `webassembly_classifier` /*!80016 DEFAULT ENCRYPTION='N' */;
USE `webassembly_classifier`;
-- MySQL dump 10.13  Distrib 8.0.17, for Linux (x86_64)
--
-- Host: localhost    Database: webassembly_classifier
-- ------------------------------------------------------
-- Server version	8.0.17

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `found_page`
--

DROP TABLE IF EXISTS `found_page`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;

CREATE TABLE `found_page` (
  `FileHash` char(64) NOT NULL,
  `PageFound` varchar(2000) DEFAULT NULL,
  `ScannedOn` datetime DEFAULT CURRENT_TIMESTAMP
) ENGINE=InnoDB;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `wasm_associations`
--

DROP TABLE IF EXISTS `wasm_associations`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;

CREATE TABLE `wasm_associations` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `FileHash` varchar(256) NOT NULL,
  `FileName` varchar(255) DEFAULT NULL,
  `SourceType` varchar(45) NOT NULL,
  `SourceName` varchar(255) NOT NULL,
  PRIMARY KEY (`ID`),
  UNIQUE KEY `FileHash` (`FileHash`,`SourceName`,`SourceType`)
) ENGINE=InnoDB AUTO_INCREMENT=17405;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `wat_details`
--

DROP TABLE IF EXISTS `wat_details`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;

CREATE TABLE `wat_details` (
  `WatID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `FileHash` char(64) NOT NULL,
  `ImportFunctions` longtext,
  `ExportFunctions` longtext,
  `NumberOfFunctions` int(11) NOT NULL,
  `WasmFileSize` double NOT NULL,
  `WatFileSize` double NOT NULL,
  `ExpansionFactor` double DEFAULT NULL,
  `IsAsm` tinyint(4) DEFAULT NULL,
  `TotalLinesOfCode` bigint(8) DEFAULT NULL,
  `MinFunctionLinesOfCode` bigint(8) DEFAULT NULL,
  `MaxFunctionLinesOfCode` bigint(8) DEFAULT NULL,
  `AvgFunctionLinesOfCode` double DEFAULT NULL,
  `NumberOfTypes` int(11) DEFAULT '0',
  `Purpose` varchar(255) DEFAULT NULL,
  `OriginalFileName` varchar(1000) DEFAULT NULL,
  `NumberOfImports` int(11) DEFAULT '0',
  `NumberOfExports` int(11) DEFAULT '0',
  `NumberOfDataSections` int(11) DEFAULT '0',
  `NumberOfTableEntries` int(11) DEFAULT '0',
  `HowCompiled` varchar(255) DEFAULT NULL,
  `CompiledFrom` varchar(45) DEFAULT NULL,
  `FileSource` varchar(45) DEFAULT NULL,
  `FileFound` varchar(4000) DEFAULT NULL,
  `GitHubSource` varchar(2000) DEFAULT NULL,
  `CFGEdgeList` longtext,
  PRIMARY KEY (`WatID`),
  UNIQUE KEY `FileHash_UNIQUE` (`FileHash`)
) ENGINE=InnoDB AUTO_INCREMENT=15267;
/*!40101 SET character_set_client = @saved_cs_client */;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2019-08-23 15:48:14
