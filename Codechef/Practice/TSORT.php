<?php
$n=fgets(STDIN);
$nums=array();
	while($n){
		$n-=1;
		$nums[]=fgets(STDIN);
	}
sort($nums);
foreach($nums as $val)echo $val;
?>
