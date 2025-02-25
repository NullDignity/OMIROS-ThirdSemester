<?php 

    $foo = array(0 => 1, 1 => 'bar');
    $lessons = array("Databases", "PHP", "C++");
    $past_lessons = ["Papadakis" => "C", "Tsatsaronis" => "Computer Architecture"];

    //echo $lessons[2];
    //echo $past_lessons["Papadakis"];

    $past_lessons["Droutsas"]="Photoshop"; // adds to array
    array_push($lessons, "Java"); // also adds to array
    //echo $lessons[3];

    echo "<br>";
    foreach ($lessons as $key => $value) {
        echo $key, " has the value ", $value, "<br>";
    }

    $subjects = array( array("Operating Systems","Computer Architecture"), array("Introduction","Algorithms")) OR DIE("This is not an array.");
    
    echo "<br>";
    foreach ($subjects as $row) {
        foreach ($row as $element) {
            echo $element, "<br>"; // for i with for y
        }                          // high school pseudocode anyone??
    }

    define("x",5); // Makes a CONSTANT
    echo x;

    $z = 5;
    if (x == $x)
        echo "Same value, same type.";


?>