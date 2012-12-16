<?
$n=fgets(STDIN);
while($n){
$n-=1;
$i=explode(" ",strrev(trim(fgets(STDIN))));
echo strrev(bcadd($i[0],$i[1]))."\n";
}

?>
