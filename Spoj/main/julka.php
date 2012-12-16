<?php
for($i=0;$i<10;$i++){
	$tot=trim(fgets(STDIN));
	$more=trim(fgets(STDIN));
	$n=bcdiv(bcsub($tot,$more),'2');
	$k=bcadd($n,$more);
	echo $k."\n".$n."\n";
}
?>
