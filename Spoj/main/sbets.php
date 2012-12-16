<?php
$t=fgets(STDIN);
$list=array();
while($t){
	$t-=1;
	for($i=0;$i<16;$i++){
		$input=fgets(STDIN);
		sscanf($input,"%s %s %d %d",$t1,$t2,$g1,$g2);
		/*$t1=fgets(STDIN);
		  $t2=fgets(STDIN);
		  $g1=fgets(STDIN);
		  $g2=fgets(STDIN);*/
		if($g1>$g2){

			if(isset($list[$t1])){  //if the team has played before
				if($list[$t1]!=-1)  // if it has not lost before			
					$list[$t1]=1; //set vict status 1
			}
			else
				$list[$t1]=1;   //team winning for firsr time so set status =1
			$list[$t2]=-1; //team lost so set status =-1
			//echo $list[$t1]." ".$list[$t2]."\n";
		}
		else{      
			if(isset($list[$t2])){
				if($list[$t2]!=-1)
					$list[$t2]=1;
			}
			else
				$list[$t2]=1;	
			$list[$t1]=-1;
			//echo $list[$t1]." ".$list[$t2]."\n";

		}
	}
	foreach($list as $key=>$value){
		if($value==1){
			echo $key."\n";
			break;
		}

	}
	unset($list);
}

?>
