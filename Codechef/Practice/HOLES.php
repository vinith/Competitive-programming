<?php
$n=fgets(STDIN);
while($n){
	$n-=1;
	$str=fgets(STDIN);
	$count=0;
	$l=strlen($str);
	for($i=0;$i<$l;$i++){
	//foreach($str as $al){
		switch($str[$i]){
			case 'A':
			case 'D':
			case 'O':
			case 'P':
			case 'R':
			case 'Q':
				$count+=1;
				break;
			case 'B':
				$count+=2;
				break;
		}
	}
	echo $count."\n";
}
?>
