<?php
function fact($x){
	static $map=array();
	if($x=='0') return '0';
	if($x=='1') return '1';
	if(!isset($map[$x]))
		$map[$x]=bcmul($x,fact(bcsub($x,'1')));
	return $map[$x];
}
$t=fgets(STDIN);
while($t){
	$t-=1;
	$n=trim(fgets(STDIN));
	echo strlen(fact($n))."\n";
}
?>
