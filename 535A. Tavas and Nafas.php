<?php

$number = (int)readline();
$numbersToNine = array("zero","one","two","three","four","five","six","seven","eight", "nine");
$numbersToTwenty = array("ten",
"eleven", "twelve", "thirteen", "fourteen", "fifteen",
"sixteen", "seventeen", "eighteen", "nineteen");
$tenNumbers = array("","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety");
if($number < 10)echo $numbersToNine[$number];
else if ($number > 9 && $number < 20)echo $numbersToTwenty[$number-10];
else{
    $x = (int) ($number / 10);
    echo $tenNumbers[$x];
    $y = $number % 10;
    if($y != 0)echo '-'.$numbersToNine[$y];
}

?>