<?php
$t=fgets(STDIN);
while($t){
	$sum=0;
	$t-=1;
	$n=fgets(STDIN);
	$male=explode(" ",fgets(STDIN));
	sort($male);
	$female=explode(" ",fgets(STDIN));
	sort($female);
	while($n){
	$sum=$sum+($female[$n-1]*$male[$n-1]);
	$n-=1;
	}
	unset($male);
	unset($female);
	echo $sum."\n";
}
?>
