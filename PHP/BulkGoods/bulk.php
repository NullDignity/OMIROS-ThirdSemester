<?php

    if ($_SERVER["REQUEST_METHOD"] == "POST")
        $goods_amount = htmlspecialchars($_POST['amount']);

    $total_price = $goods_amount * 15;
    $original_price = $total_price;

    if ($goods_amount <= 300)
        $total_price = $total_price * 0.80;
    else if ($goods_amount > 300 && $goods_amount <= 400)
        $total_price = $total_price * 0.72;
    else if ($goods_amount > 400 && $goods_amount <= 500)
        $total_price = $total_price * 0.64;
    else
        $total_price = $total_price * 0.55;

    echo "Original Pricing: ", $original_price, "€<br>";
    echo "Total Discounted Bulk Order Good Price: ", $total_price, "€";

?>  