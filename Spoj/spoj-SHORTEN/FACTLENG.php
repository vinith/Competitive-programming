<?

$t=fgets(STDIN);
while($t){
	$t-=1;
	$n=fgets(STDIN);
	$n+='';
	$a='1';
	while($n){
		$a=bcmul($a,$n);
		$n=bcsub($n,'1');
	}
	echo strlen($a)."\n";
}
?>
