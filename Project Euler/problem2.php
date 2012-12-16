<?php
$a=1;
$b=2;
$fib=0;
$sum=0;
while(1){
	$fib=$a+$b;
	$a=$b;
	$b=$fib;
	if($fib>4000000)
		break;
	//echo $fib."\n";
	if(($fib%2)==0)
		$sum=$fib+$sum;
	echo $fib."\n";
}
echo $sum+2;
?>
