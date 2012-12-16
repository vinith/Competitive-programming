<?
$s=0;
$p=fgets(STDIN);
while($p){
	$p-=1;
	$n=fgets(STDIN);
        $n>0?$s+=$n:1;
}
echo $s
?>


