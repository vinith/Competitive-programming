<?php
$stat=0;
$values=array();
$counter=0;
for($i=0;$i<5;$i++){
	$ip=fgets(STDIN);
	$pos=strpos($ip,"FBI");
	if ($pos!==FALSE) {

		$values[$counter]=$i+1;
		$stat=1;
		$counter++;
		//echo "FOUND!!!";
	}
}
if($stat==0){
	echo "HE GOT AWAY!";
}
else{
	foreach($values as $out){
		echo $out." ";
	}
}
?>
