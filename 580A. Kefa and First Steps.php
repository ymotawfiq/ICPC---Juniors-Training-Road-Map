<?php
// problem link --> https://codeforces.com/contest/580/problem/A
$number = (int)readline();
$input = readline();
$arr = explode(" ", $input);
$ans = 0; $c = 1;
$flag = false;
for ($i = 0; $i < $number-1; $i++){
    if($arr[$i] <= $arr[$i+1])$c++;
    else{
        $ans = max($ans, $c);
        $c = 1;
    }
}
$ans = max($ans, $c);
echo $ans;
?>