-- phpMyAdmin SQL Dump
-- version 4.2.11
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Mar 28, 2016 at 08:57 AM
-- Server version: 5.6.21
-- PHP Version: 5.6.3

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `nbb_oars`
--

-- --------------------------------------------------------

--
-- Table structure for table `oars_jobs`
--

CREATE TABLE IF NOT EXISTS `oars_jobs` (
`jobid` bigint(20) NOT NULL COMMENT 'unique job reference number',
  `jcreationtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `jcustomercalltime` datetime NOT NULL,
  `jcustomercaller` varchar(50) DEFAULT NULL,
  `jcustomertelno` varchar(20) DEFAULT NULL,
  `jcustomerlocation` varchar(50) NOT NULL,
  `jcollectfrom` varchar(50) NOT NULL,
  `jdeliverto` varchar(50) NOT NULL,
  `jreceiptnum` int(10) DEFAULT NULL,
  `jcategory` varchar(20) NOT NULL DEFAULT 'Standard',
  `jemergencyclinician` varchar(50) DEFAULT NULL,
  `jemergencyblues` tinyint(1) DEFAULT '0',
  `jdespatchedname` varchar(50) DEFAULT NULL,
  `jdespatcheduid` int(11) DEFAULT NULL,
  `jdespatchedtime` time DEFAULT NULL,
  `jcollecttime` time DEFAULT NULL,
  `jdelivertime` time DEFAULT NULL,
  `jminstocollect` int(11) DEFAULT NULL,
  `jminsintransit` int(11) DEFAULT NULL,
  `jcontrollername` varchar(50) NOT NULL,
  `jcontrolleruid` int(11) DEFAULT NULL,
  `jentrynotes` text COMMENT 'notes for job',
  `jstatus` varchar(20) DEFAULT NULL,
  `jvalidatername` varchar(50) DEFAULT NULL,
  `jvalidateruid` int(11) DEFAULT NULL,
  `jvalidationnotes` text COMMENT 'notes from validation',
  `jlatestupdate` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=utf8 COMMENT='thisi is the table with job records in it';

--
-- Dumping data for table `oars_jobs`
--

INSERT INTO `oars_jobs` (`jobid`, `jcreationtime`, `jcustomercalltime`, `jcustomercaller`, `jcustomertelno`, `jcustomerlocation`, `jcollectfrom`, `jdeliverto`, `jreceiptnum`, `jcategory`, `jemergencyclinician`, `jemergencyblues`, `jdespatchedname`, `jdespatcheduid`, `jdespatchedtime`, `jcollecttime`, `jdelivertime`, `jminstocollect`, `jminsintransit`, `jcontrollername`, `jcontrolleruid`, `jentrynotes`, `jstatus`, `jvalidatername`, `jvalidateruid`, `jvalidationnotes`, `jlatestupdate`) VALUES
(8, '2016-03-21 15:39:34', '0000-00-00 00:00:00', NULL, NULL, '', 'jcuh', '', NULL, 'Standard', NULL, 0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, '', NULL, NULL, NULL, NULL, NULL, NULL, '2016-03-21 15:39:34');

-- --------------------------------------------------------

--
-- Table structure for table `oars_locations`
--

CREATE TABLE IF NOT EXISTS `oars_locations` (
`locid` int(11) NOT NULL,
  `locabbr` varchar(5) NOT NULL COMMENT '5 letter abbreviation',
  `locname` varchar(50) NOT NULL COMMENT 'name of location',
  `locnotes` text NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8;

--
-- Dumping data for table `oars_locations`
--

INSERT INTO `oars_locations` (`locid`, `locabbr`, `locname`, `locnotes`) VALUES
(1, 'RVI', 'Royal Victoria Infirmary', ''),
(3, 'JCUH', 'James Cook University Hospital', '');

-- --------------------------------------------------------

--
-- Table structure for table `oars_users`
--

CREATE TABLE IF NOT EXISTS `oars_users` (
`id` int(11) NOT NULL,
  `level` smallint(6) NOT NULL DEFAULT '0',
  `name` varchar(30) DEFAULT NULL,
  `password` varchar(40) DEFAULT NULL,
  `email` varchar(75) DEFAULT NULL,
  `mobile` varchar(15) NOT NULL,
  `postcode` varchar(10) NOT NULL,
  `locality` varchar(50) NOT NULL,
  `telephone` varchar(15) NOT NULL,
  `uid` int(11) NOT NULL DEFAULT '0',
  `registers` varchar(9) NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=256 DEFAULT CHARSET=utf8;

--
-- Dumping data for table `oars_users`
--

INSERT INTO `oars_users` (`id`, `level`, `name`, `password`, `email`, `mobile`, `postcode`, `locality`, `telephone`, `uid`, `registers`) VALUES
(1, 2, 'administrator', 'd4e8cd4dcd4d4203730eb4109b166e8d', 'ict.officer@northumbriabloodbikes.org.uk', '', '', 'Durham', '', 0, ''),
(182, 2, '~ict', 'a16969ecec9b1bab7438f0a6773d59d8', '', '', '', '', '', 0, ''),
(183, 1, 'gary annan', '33a1dd6b6a00eba06521d11402412dfd', 'Gary.annan.ga@googlemail.com', '07708 227 477', 'DH3 1DR', 'Birtley', '', 45, 'R  '),
(184, 1, 'nigel barlow', '33a1dd6b6a00eba06521d11402412dfd', 'barlowsmallpipes@virginmedia.com', '07778 481 641', 'NE12 8AP', 'Forest Hall', '0191 215 9147', 305, 'R  '),
(185, 1, 'mike briant', '33a1dd6b6a00eba06521d11402412dfd', 'mikebriant@hotmail.com', '07786 086 727', 'NE15 0RQ', 'Newcastle upon Tyne', '01661 855 088', 55, 'RD '),
(186, 1, 'philippa bromley', '41b09482a8512560ced84e1d508f1abd', 'skibird22@aol.com', '07885 185 082', 'NE35 9HB', 'Boldon Colliery', '0191 908 2971', 273, 'R  '),
(187, 1, 'barry bullas', '3a5eaac02558c4d9f0bc723848a64282', 'membership@northumbriabloodbikes.org.uk', '07949 953 400', 'NE13 7BN', 'Newcastle', '0191 236 6817', 74, 'RDC# '),
(188, 1, 'michael buyers', 'fcb6a1353eb9cfd09e863035277608bd', 'mikebuyers@msn.com', '07977 993 456', 'NE29 8BH', 'North Shields', '0191 257 6741', 318, 'R  '),
(189, 1, 'paul cain', '4e89f8bd532621837425745a3869fd52', 'cainengineering@live.com', '07854 517 820', 'NE24 5RG', 'Blyth', '01670 797 646', 157, 'R  '),
(190, 1, 'malcolm cramman', '92c6d30b1fe981058a70c777c6e69f75', 'margaret_cramman@hotmail.com', '07765 145 555', 'NE33 3QE', 'South Shields', '0191 456 0085', 226, 'R  '),
(191, 1, 'allan dalgarno', 'f7240e318fa2efbc7ca2fa7416d22a32', 'annallandal@hotmail.co.uk', '07929 998 296', 'NE12 7ED', 'Newcastle', '0191 268 3209', 202, 'R  '),
(192, 1, 'ian dimmick', '61e8895c1bc2d548e3c93d7b270773e5', 'iandimmick1@gmail.com', '07970 344 823', 'NE391RB', 'Rowlands Gill', '01207 542 005', 351, 'R  '),
(193, 1, 'eric fitzpatrick', '61e8895c1bc2d548e3c93d7b270773e5', 'e.patrick454@tiscali.co.uk', '07443 051 281', 'NE3 2YB', 'Newcastle upon Tyne', '0191 271 2245', 221, 'R  '),
(194, 1, 'owain harris', '41b09482a8512560ced84e1d508f1abd', 'owainharris@aol.com', '07746 152 419', 'NE38 8TJ', 'Washington', '0191 416 6510', 63, 'RD '),
(195, 1, 'alex house', '41b09482a8512560ced84e1d508f1abd', 'house.alexander@gmail.com', '07970 323 643', 'NE12 8NW', 'Newcastle upon tyne', '', 293, 'R  '),
(196, 1, 'ian hunter', '3a5eaac02558c4d9f0bc723848a64282', 'fazermann@gmail.com', '07904 088 806', 'NE16 5SB', 'Whickham', '0191 422 5135', 54, 'R  '),
(197, 1, 'tom ivison', 'fcb6a1353eb9cfd09e863035277608bd', 'tiv349@AOL.com', '07984 864 528', 'NE2 3BG', 'Newcastle Upon Tyne', '01912 120 601', 208, 'R  '),
(198, 1, 'ken kelly', '4e89f8bd532621837425745a3869fd52', 'Ken.Kelly@rpsgroup.com', '07917 585 185', 'DH1 5SN', 'Durham', '0191 386 6217', 217, 'R  '),
(199, 1, 'andrew lee', 'fcb6a1353eb9cfd09e863035277608bd', 'bennetsend@gmail.com', '07941 314 061', 'SR6 7SF', 'Sunderland', '0191 680 1240', 308, 'R  '),
(200, 1, 'chris mitchell', '61e8895c1bc2d548e3c93d7b270773e5', 'chrismitchell1956@gmail.com', '07595 467 012', 'SR3 2QP', 'Sunderland', '0191 528 7561', 111, 'RC#'),
(201, 1, 'graeme mitchell', '33a1dd6b6a00eba06521d11402412dfd', 'mitchell.graeme7378@gmail.com', '07974 392 591', 'NE12 9LN', 'Newcastle upon Tyne', '0191 266 1123', 155, 'RD '),
(202, 1, 'graham moor', 'f7240e318fa2efbc7ca2fa7416d22a32', 'graham999@gmail.com', '07971 549 443', 'NE40 4XP', 'Crawcrook', '0191 413 4008', 182, 'RD '),
(203, 1, 'paul paterson', '3a5eaac02558c4d9f0bc723848a64282', 'p@ulpaterson.net', '07834 348 580', 'SR7 8SG', 'Co. Durham', '0191 527 1908', 314, 'RD '),
(204, 1, 'rob powell', '41b09482a8512560ced84e1d508f1abd', 'robpowell946@btinternet.com', '07912 107 068', 'NE36 0DQ', 'East Boldon', '0191 536 6231', 223, 'R  '),
(205, 1, 'david richardson', '191f4b39563783cf7878c8a681e7eab1', 'davidrichardson907@btinternet.com', '07887 967 806', 'SR2 7QX', 'Sunderland', '0191 514 2218', 319, 'R  '),
(206, 1, 'mark richardson', '41b09482a8512560ced84e1d508f1abd', 'mark@markedwardrichardson.co.uk', '07881 313 355', 'NE27 0BJ', 'Newcastle upon Tyne', '01207 236 694', 133, 'R  '),
(207, 1, 'philroberts', 'f7240e318fa2efbc7ca2fa7416d22a32', 'proberts64@hotmail.co.uk', '07796 525 948', 'DH4 4XW', 'Hougton le Spring', '0191 584 5508', 112, 'R  '),
(208, 1, 'peterrobertson', '61e8895c1bc2d548e3c93d7b270773e5', 'robertsonpeter@hotmail.co.uk', '07523 568 419', 'NE61 2XT', 'Morpeth', '01670 504 794', 101, 'RDC#'),
(209, 1, 'alan ross', 'f7240e318fa2efbc7ca2fa7416d22a32', 'alan.ross@northumbriabloodbikes.org.uk', '07962 464 000', 'DH4 7RY', 'Houghton le spring', '0191 584 1136', 52, 'R  '),
(210, 1, 'richard scholfield', '92c6d30b1fe981058a70c777c6e69f75', 'rich@rscholfield.com', '07812 583 323', 'NE7 7QT', 'Newcastle', '', 46, 'RD '),
(211, 1, 'david sharpe', '3a5eaac02558c4d9f0bc723848a64282', 'davidsharpe36@hotmail.com', '07887 496 456', 'NE46 3EG', 'Hexham', '01434 694 357', 294, 'R  '),
(212, 1, 'geoff spencer', '92c6d30b1fe981058a70c777c6e69f75', 'judithandgeoff@hotmail.co.uk', '07890 009 075', 'NE28 9QQ', 'Newcastle', '0191 263 1374', 136, 'RD '),
(213, 1, 'craig stephenson', 'f7240e318fa2efbc7ca2fa7416d22a32', 'CRAIG_STEPHENSON@HOTMAIL.CO.UK', '07447 559 465', 'NE33 1EH', 'South Shields', '', 372, 'R  '),
(214, 1, 'jack stewart', 'f7240e318fa2efbc7ca2fa7416d22a32', 'js.ear@talktalk.net', '07866 776 206', 'DH80QQ', 'Durham', '01207 561 982', 172, 'R  '),
(215, 1, 'alistair storey', 'c5927340f45c11b8bac766880d061690', 'TubaAlistair@hotmail.com', '07711 934 705', 'SR6 0QD', 'Sunderland', '0191 510 8327', 290, 'R  '),
(216, 1, 'sean storey', '41b09482a8512560ced84e1d508f1abd', 'seanstorey151@hotmail.com', '07581 087 247', 'NE15 7AN', 'Newcastle upon tyne', '0191 274 3493', 333, 'RD '),
(217, 1, 'ken tait', 'f7240e318fa2efbc7ca2fa7416d22a32', 'kenneth.tait3@btinternet.com', '07792 947 186', 'DL1 3NA', 'Darlington', '01325 318 059', 302, 'R  '),
(218, 1, 'allan thompson', '61e8895c1bc2d548e3c93d7b270773e5', 'allan.thompson@siemens.com', '07808 824 288', 'NE25 8NF', 'Whitley Bay', '', 291, 'R  '),
(219, 1, 'michael thompson', '57d016cfd4e5f84d14d8103a4b33821d', 'madontour@googlemail.com', '07976 292 142', 'DL15 0ST', 'Durham', '01388 327 689', 201, 'R#'),
(220, 1, 'jerry trowbridge', 'f7240e318fa2efbc7ca2fa7416d22a32', 'trowbridge1@btinternet.com', '07860 620 297', 'DH8 9QJ', 'Consett', '07860 620 297', 232, 'R  '),
(221, 1, 'john vasey', 'f7240e318fa2efbc7ca2fa7416d22a32', 'johnvasey22@gmail.com', '07538 457 429', 'NE38 0DY', 'Washington', '', 332, 'R  '),
(222, 1, 'andy watson', 'fcb6a1353eb9cfd09e863035277608bd', 'andywots@aol.com', '07966 367 353', 'DL13 3RE', 'Co Durham', '01388 488 987', 98, 'R  '),
(223, 1, 'michael wilkinson', '92c6d30b1fe981058a70c777c6e69f75', 'wmpw52@gmail.com', '07920 091 860', 'NE16 4PJ', 'Whickham', '0191 488 7339', 106, 'R  '),
(224, 1, 'stewart wilkinson', 'fcb6a1353eb9cfd09e863035277608bd', 'stewart.wilkinson@hotmail.co.uk', '07973 324 355', 'NE16 5TU', 'Newcastle upon tyne', '0191 488 8401', 218, 'R  '),
(225, 1, 'rob wilks', '3a5eaac02558c4d9f0bc723848a64282', 'rob@rjw.org.uk', '07786 033 753', 'NE40 4RT', 'Ryton', '0191 413 3196', 94, 'R  '),
(226, 1, 'ian hudson', '33a1dd6b6a00eba06521d11402412dfd', 'ianjohngd@tiscali.co.uk', '07825 037 159', 'NE38 9EY', 'Washington', '0191 388 5316', 375, 'R  '),
(227, 1, 'lee earnshaw', '191f4b39563783cf7878c8a681e7eab1', 'lee.earnshaw@gmail.com', '07711 559 754', 'NE61 3DX', 'Morpeth', '', 379, 'RD '),
(228, 1, 'len potts', 'fcb6a1353eb9cfd09e863035277608bd', 'l.potts.45@btinternet.com', '07901 990 841', 'DL17 0RW', 'Co Durham', '01388 720 494', 388, 'R  '),
(229, 1, 'ross mackenzie', '92c6d30b1fe981058a70c777c6e69f75', 'mackas@btinternet.com', '07989 153 290', 'NE6 5NX', 'Newcastle upon tyne', '0191 265 9167', 306, 'R  '),
(230, 1, 'peter watson', '191f4b39563783cf7878c8a681e7eab1', 'peter.watson2007@btinternet.com', '07789 404 118', 'DH6 2YB', 'Durham', '0191 526 5434', 289, 'R  '),
(231, 1, 'brian slassor', '191f4b39563783cf7878c8a681e7eab1', 'brian@slassor.fslife.co.uk', '07970 820 046', 'ne65 8bg', 'Morpeth', '01665 570 373', 409, 'RD '),
(232, 1, 'neil willis', '61e8895c1bc2d548e3c93d7b270773e5', 'njwillis420@gmail.com', '07845 803 747', 'DL3 8AJ', 'Darlington', '01325 464 545', 411, 'R  '),
(233, 1, 'johnny kerr', '191f4b39563783cf7878c8a681e7eab1', 'johnny.kerr@hotmail.co.uk', '07731 319 313', 'ne15 6nz', 'Newcastle', '', 459, 'RD '),
(234, 1, 'steve rawlings', '33a1dd6b6a00eba06521d11402412dfd', 'Steverawl3@hotmail.co.uk', '07875 080 126', 'NE30 3LR', 'North Shields', '0191 252 2391', 465, 'RD '),
(235, 1, 'tony martin', '191f4b39563783cf7878c8a681e7eab1', 'ktm1601@hotmail.co.uk', '07982 347 758', 'dl12yu', 'darlington', '01325 264 017', 629, 'R  '),
(236, 1, 'mike thompson', 'c5927340f45c11b8bac766880d061690', 'miketfj1200@HOTMAIL.CO.UK', '07854 187 753', 'dl135hn', 'co. durham', '01388 718 844', 730, 'R  '),
(237, 1, 'simon allan', '4e89f8bd532621837425745a3869fd52', 'simon.allan@me.com', '07775 771 867', 'NE65 8UQ', 'Longhorsley ', '', 777, 'R  '),
(238, 1, 'andy webb', 'fcb6a1353eb9cfd09e863035277608bd', 'andy.webb.email@gmail.com', '07886 190 788', 'NE661UH', 'Alnwick', '01665 602 789', 778, 'R  '),
(239, 1, 'ian young', '3a5eaac02558c4d9f0bc723848a64282', 'ianyoung2@talktalk.net', '07747 504 706', 'NE66 1RR', 'Alnwick', '01665 602 500', 784, 'R  '),
(240, 1, 'tim roberts', 'fcb6a1353eb9cfd09e863035277608bd', 'tim@tmtr.com', '07764 190 450', 'DH5 9RG', 'Houghton le Spring', '', 788, 'R  '),
(241, 1, 'ian jobson', '61e8895c1bc2d548e3c93d7b270773e5', 'iancjobson@aol.com', '07802 641 866', 'Ne614nu', 'Morpeth', '01670 772 480', 791, 'R  '),
(242, 1, 'craig moodie', 'c5927340f45c11b8bac766880d061690', 'mogwise@yahoo.co.uk', '07983 477 244', 'NE63 8RQ', 'Ashington', '01670 813 296', 790, 'RD '),
(243, 1, 'peter gosling', 'fcb6a1353eb9cfd09e863035277608bd', 'p.d.gosling@ncl.ac.uk', '07753 574 628', 'NE61 2ST', 'Morpeth', '', 798, 'R  '),
(244, 1, 'william reynalds', '92c6d30b1fe981058a70c777c6e69f75', 'william_reynalds@hotmail.com', '07800 883 455', 'NE61 2RD', 'MORPETH', '01670 516 888', 806, ' D '),
(245, 1, 'marc lennox', '4e89f8bd532621837425745a3869fd52', 'Marc.Lennox@mail.com', '07903 343 205', 'NE28 9QQ', 'Wallsend', '0191 263 9031', 857, ' D '),
(246, 1, 'michael goodwin', 'c5927340f45c11b8bac766880d061690', 'mna.goodwin@gmail.com', '07791 393 916', 'NE22 6AT', 'Bedlington', '01670 530 132', 860, 'RD '),
(247, 1, 'christopher bowart', '3a5eaac02558c4d9f0bc723848a64282', 'cnbowart@btinternet.com', '07929 851 739', 'NE24 5RL', 'Blyth', '01670 540 043', 864, ' D '),
(248, 1, 'paul gilligan', '191f4b39563783cf7878c8a681e7eab1', 'gilligan5@blueyonder.co.uk', '07952 691 595', 'ne31 1rs', 'Hebburn', '0191 483 3717', 869, 'R  '),
(249, 1, 'mervyn hilton', '191f4b39563783cf7878c8a681e7eab1', 'mervyn.hilton@talktalk.net', '07856 766 273', 'SR79SE', 'Seaham', '0191 517 3961', 919, ' D '),
(250, 1, 'steven hughes', '4e89f8bd532621837425745a3869fd52', 'stevenhughes60@gmail.com', '07920 015 109', 'NE38 9BG', 'Washington', '', 917, ' D '),
(251, 1, 'alan johnson', 'fcb6a1353eb9cfd09e863035277608bd', 'alan.johnson724@gmail.com', '07957 566 414', 'SR31DH', 'Sunderland', '0191 660 8595', 918, ' D '),
(252, 1, 'dan mcgarrie', 'fcb6a1353eb9cfd09e863035277608bd', 'dan.mcgarrie@gmail.com', '07581 392 164', 'NE3 3QL', 'Newcastle upon Tyne', '', 938, ' D '),
(253, 1, 'andrew pennell', '41b09482a8512560ced84e1d508f1abd', 'durham.999@gmail.com', '07825 682 015', 'DH61DT', 'Durham', '0191 372 2878', 933, ' D '),
(254, 1, 'david simpson', '61e8895c1bc2d548e3c93d7b270773e5', 'p3skydave@hotmail.co.uk', '07910 567 859', 'NE31 2XE', 'Hebburn', '0191 420 1985', 931, ' D '),
(255, 1, 'peter mcewen', '3a5eaac02558c4d9f0bc723848a64282', 'peter.mcewen@btconnect.com', '07764 584 382', 'NE29 9BS', 'North Shields', '0191 257 2601', 944, ' D ');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `oars_jobs`
--
ALTER TABLE `oars_jobs`
 ADD PRIMARY KEY (`jobid`), ADD KEY `jcustomercalltime` (`jcustomercalltime`,`jdespatcheduid`,`jcontrolleruid`,`jvalidateruid`);

--
-- Indexes for table `oars_locations`
--
ALTER TABLE `oars_locations`
 ADD PRIMARY KEY (`locid`), ADD UNIQUE KEY `locabbr` (`locabbr`,`locname`);

--
-- Indexes for table `oars_users`
--
ALTER TABLE `oars_users`
 ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `oars_jobs`
--
ALTER TABLE `oars_jobs`
MODIFY `jobid` bigint(20) NOT NULL AUTO_INCREMENT COMMENT 'unique job reference number',AUTO_INCREMENT=9;
--
-- AUTO_INCREMENT for table `oars_locations`
--
ALTER TABLE `oars_locations`
MODIFY `locid` int(11) NOT NULL AUTO_INCREMENT,AUTO_INCREMENT=4;
--
-- AUTO_INCREMENT for table `oars_users`
--
ALTER TABLE `oars_users`
MODIFY `id` int(11) NOT NULL AUTO_INCREMENT,AUTO_INCREMENT=256;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
