<?php

    $db = mysqli_connect("localhost:3306", "root", "asriel", "classicmodels"); // connects with the database

    if ($_SERVER["REQUEST_METHOD"] == "POST") // checks if the request method is POST. prevents basic SQL injections
        $myname = mysqli_real_escape_string($db, $_POST['name']);

    $result = mysqli_query($db, "SELECT * FROM customers WHERE contactFirstName = '$myname'"); // finds the customers from the linked database
    $count = mysqli_num_rows($result); // finds how many rows were matching from the above query

    if ($result -> num_rows > 0)
        while ($row = mysqli_fetch_assoc($result))
            echo $row['contactFirstName'], " ", $row['contactLastName'], " from the Country of ", $row['country'], "<br>";
    else
        echo "There were no customers with this name.";

    $db -> close();

?>