<?php 

    $amount = $_POST['salary'];

    if ($amount <= 600)
        $tax = $amount * 0.07;
    else if ($amount > 600 && $amount <= 800)
        $tax = $amount * 0.09;
    else if ($amount > 800 && $amount <= 1100)
        $tax = $amount * 0.12;
    else
        $tax = $amount * 0.15;

    echo "You must pay ", $tax, "€ in taxes out of your ", $amount, "€ monthly salary. 
        As a result, you are entitled to ", ($amount-$tax), "€ after taxes.";

?>