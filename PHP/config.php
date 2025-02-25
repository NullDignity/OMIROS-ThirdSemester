<?php
   define('DB_SERVER', 'localhost');
   define('DB_USERNAME', 'root');
   define('DB_PASSWORD', 'asriel');
   define('DB_DATABASE', 'Efarmogi');
   $db = new mysqli(DB_SERVER,DB_USERNAME,DB_PASSWORD,DB_DATABASE) or die("Connect failed: %s\n". $db -> error);
?>