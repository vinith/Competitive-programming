<?php
function power($n,$p)
{
	if($p=='0')
		return '1';
	else if($p=='1')
		return bcmod($n,'10');
	else if(bcmod($p,'2')!='0')
		return (bcmod(bcmul(bcmod($n,'10'),power(bcmod(bcmul($n,$n),'10'),bcdiv(bcsub($n,'1'),'2'))),'10'));
	else
		return (bcmod(power(bcmod(bcmul($n,$n),'10'),bcdiv($p,'2')),'10'));
}
$t=fgets(STDIN);
while($t){
	$t-=1;
	$input=trim(fgets(STDIN));
	sscanf($input,"%s %s",$n1,$p1);
	echo power($n1,$p1)."\n";
}
?>
