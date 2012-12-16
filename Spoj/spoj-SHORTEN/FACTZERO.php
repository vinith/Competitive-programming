<? 
$t=fgets(STDIN);
while($t){
$t-=1;
for($c=0,$n=fgets(STDIN);$n>=5;$n=(int)($n/5),$c+=$n)
;
echo $c."\n";
}
?>
