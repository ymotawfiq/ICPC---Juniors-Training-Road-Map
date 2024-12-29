
<?php
// problem link --> https://codeforces.com/contest/34/problem/A


$number = (int)readline();
$input = readline();
$arr = explode(" ", $input);
$a = 0; $b = 0;
$min = 9999999;
for ($i = 0; $i < $number-1; $i++){
    if($min > abs($arr[$i] - $arr[$i+1])){
        $min = abs($arr[$i] - $arr[$i+1]);
        $a = $i+1;
        $b = $i+2;
    }
}
if($min > abs($arr[0] - $arr[$number-1])){
    $a = 1;
    $b = $number;
}

echo $a.' '.$b;

?>