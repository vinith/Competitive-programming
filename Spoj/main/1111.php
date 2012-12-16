<?php
$n=trim(fgets(STDIN));
echo bcpow(bcdiv(bcsub(bcpow('10',$n),'1'),'9'),'2');


?>
