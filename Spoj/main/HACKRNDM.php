<?php
$n=fgets(STDIN);
sscanf($n,"%d %d",$n,$k);
$arr=array();
$temp=fgets(STDIN);
$arr[$temp]=$temp;
$min=$temp;
$n-=1;
while($n){
	$n-=1;
	fscanf(STDIN,"%d",$temp);
	$arr[$temp]=$temp;
	if($min>$temp)
		$min=$temp;
}
echo sizeof($arr);
$count=0;
//for($i=$min;$i<=sizeof($arr);$i++){
	//if(isset($arr[$i+$k]))
		//echo $i." ".$k."\n";
//}
echo $count."\n";
?>
