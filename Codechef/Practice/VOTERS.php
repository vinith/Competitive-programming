<?php
$input=fgets(STDIN);
sscanf($input,"%d %d %d",$a,$b,$c);
$list1=array();
$list2=array();
$list3=array();
for($i=0;$i<$a;$i++){
	$list1[fgets(STDIN)]=1;
}
for($i=0;$i<$b;$i++){
        $list2[fgets(STDIN)]=1;
}
for($i=0;$i<$c;$i++){
        $list3[fgets(STDIN)]=1;
}

?>
