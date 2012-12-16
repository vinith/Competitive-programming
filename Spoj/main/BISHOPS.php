<?php

while($n=trim(fgets(STDIN))){
	if($n=='1')
		echo "1\n";
	else
		echo bcsub(bcmul('2',$n),'2')."\n";
}
?>
