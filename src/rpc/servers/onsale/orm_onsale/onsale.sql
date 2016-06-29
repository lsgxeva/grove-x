/* This file was generated by ODB, object-relational mapping (ORM)
 * compiler for C++.
 */

DROP TABLE IF EXISTS `onsale_onsalegroup`;

DROP TABLE IF EXISTS `onsale_step`;

DROP TABLE IF EXISTS `onsale_present`;

DROP TABLE IF EXISTS `onsale_warelabelwares`;

DROP TABLE IF EXISTS `onsale_warelabel`;

CREATE TABLE `onsale_warelabel` (
  `id` BIGINT UNSIGNED NOT NULL PRIMARY KEY AUTO_INCREMENT,
  `name` TEXT NOT NULL,
  `label_type` INT NOT NULL,
  `scope_type` INT NOT NULL,
  `sub_type` INT NOT NULL,
  `seller_id` BIGINT NOT NULL,
  `seller_slug` TEXT NOT NULL,
  `create_time` DATETIME NULL,
  `update_time` DATETIME NULL,
  `create_man` TEXT NOT NULL)
 ENGINE=InnoDB;

CREATE TABLE `onsale_warelabelwares` (
  `ware_label_id` INT UNSIGNED NOT NULL,
  `ware_id` BIGINT NOT NULL,
  `create_time` DATETIME NULL)
 ENGINE=InnoDB;

CREATE TABLE `onsale_present` (
  `step_id` INT UNSIGNED NOT NULL,
  `sku_id` BIGINT NOT NULL,
  `sku_price` DOUBLE NOT NULL,
  `sku_count` INT UNSIGNED NOT NULL,
  `sku_slug` TEXT NOT NULL)
 ENGINE=InnoDB;

CREATE TABLE `onsale_step` (
  `id` BIGINT UNSIGNED NOT NULL PRIMARY KEY AUTO_INCREMENT,
  `onsale_group_id` INT UNSIGNED NOT NULL,
  `full_credit` DOUBLE NOT NULL,
  `favor_credit` DOUBLE NOT NULL,
  `favor_rate` DOUBLE NOT NULL,
  `full_count` INT UNSIGNED NOT NULL,
  `full_rate` DOUBLE NOT NULL,
  `full_price` DOUBLE NOT NULL)
 ENGINE=InnoDB;

CREATE TABLE `onsale_onsalegroup` (
  `id` BIGINT UNSIGNED NOT NULL PRIMARY KEY AUTO_INCREMENT,
  `slug` TEXT NOT NULL,
  `name` TEXT NOT NULL,
  `title` TEXT NOT NULL,
  `comment` TEXT NOT NULL,
  `favor_type` INT NOT NULL,
  `label_type` INT NOT NULL,
  `ware_label_id` INT NOT NULL,
  `involve_count` INT NOT NULL,
  `start_time` DATETIME NULL,
  `end_time` DATETIME NULL,
  `create_time` DATETIME NULL,
  `update_time` DATETIME NULL,
  `verify_status` INT NOT NULL,
  `applicant` TEXT NOT NULL,
  `approver` TEXT NOT NULL,
  `modifier` TEXT NOT NULL,
  `jump_label` TEXT NOT NULL,
  `jump_data` TEXT NOT NULL)
 ENGINE=InnoDB;
