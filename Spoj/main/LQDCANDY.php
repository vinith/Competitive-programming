<?php
$t=fgets(STDIN);
while($t){
	$t-=1;
	$n=trim(fgets(STDIN));
	$x='2';
	$counter=0;
	while($x<=$n){
	$x=bcmul($x,$x);
	$counter++;
	}
	$counter++;
	$x=bcdiv($x,'2');
	echo $x." ".$counter."\n";
}

?>
