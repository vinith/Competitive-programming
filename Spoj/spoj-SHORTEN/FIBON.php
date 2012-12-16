<?
$t=fgets(STDIN);
$t-=0;
while($t--)
{
	$n=fgets(STDIN);
	$n+=0;
	$s='0';
	$i='1';
	for(;$n--;$f=bcadd($s,$i),$s=$i,$i=$f)
	;
	echo $s."\n";
}
?>

