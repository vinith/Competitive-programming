<?php
$n=fgets(STDIN);
$numbers=array();
for($i=0;$i<$n;$i++){
	$numbers[]=fgets(STDIN);
}
$count=(array_count_values($numbers));
foreach($count as $ans => $y){
	if($y==1){
		echo $ans."\n";
		break;
	}
}
?>
