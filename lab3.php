<html>
<body>




<?php
$number1=$_POST["number1"];
$found=0;
$array=array(0,0,0,0,0);





for ($i=0; $i<5; $i++){
	$array[$i]=rand(1,20);
}

for($i=0; $i<count($array);$i++){
	if($number1==$array[$i]){
		$found=1;
	}
}
for ($j=0; $j<count($array);$j++){
}	
		if( $found==1 ){
			echo "you were right!";
		
		}

		else{
		
			echo "guess again </br>";
			
			echo "the right answers were </br>";
			for ($j=0; $j<count($array); $j++){
				
				echo  " $array[$j] </br>   " ;
				
			}



	}


?>



<form method="POST" action="lab3.html">
<input type="submit" value="try another one"/>
</form>
</body>
</html>
