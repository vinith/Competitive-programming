<?php
$t=fgets(STDIN);
$accounts=array();
while($t){
	$t-=1;
	$n=fgets(STDIN);
	for($i=0;$i<$n;$i++){
		$accounts[$i]=trim(fgets(STDIN));

	}
	$values=array_count_values($accounts);
	sort($accounts);
	$result=array_unique($accounts);
	foreach($result as $key=>$val){
		echo $val." ".$values[$val]."\n";
	}
	echo "\n";
	//if($t!=0)
	//$z=fgets(STDIN);
	unset($accounts);
	//unset($values);
	//unset($result);
}

?>
