<?php
$a='1';
$b='1';
$fib='0';
$x=2;
while(strlen($fib)<1000){
$fib=bcadd($a,$b);
$a=$b;
$b=$fib;
$x++;
//echo $fib."\n";
}
echo $x."\n";
echo strlen($fib)."\n";
echo $fib;
?>
