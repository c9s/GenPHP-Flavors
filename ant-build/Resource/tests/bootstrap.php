<?php
require 'vendor/pear/PHPUnit/TestMore.php';
require 'vendor/pear/Universal/ClassLoader/BasePathClassLoader.php';
require 'tests/DriverFactory.php';
require 'tests/PHPUnit/PDO/TestCase.php';
$loader = new \Universal\ClassLoader\BasePathClassLoader(array('src','vendor/pear'));
$loader->useIncludePath(true);
$loader->register();
