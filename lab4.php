<html>
<body>

<?php



$guessarray = array(0,0,0,0,0);

$correctarray = array(0,0,0,0,0);



$guessarray[0] = $_POST["number1"];
$guessarray[1] = $_POST["number2"];
$guessarray[2] = $_POST["number3"];
$guessarray[3] = $_POST["number4"];
$guessarray[4] = $_POST["number5"];


 



//generating the correct array
for($i=0; $i<5; $i++){
	$correctarray[$i]=rand(1,20);
	for($j=0; $j<$i;$j++){
			if($correctarray[$i]==$correctarray[$j]){
				$i--;
				break;
	}



	}
}



//printing out the list that they guest

echo  "your guess was: </br> " ;
for ($k=0; $k < 5; $k++) { 
	echo $guessarray[$k].","  ;
}

echo "</br>";
///printing out the correct answers

echo  "The correct answer was </br>" ;
for ($i=0; $i<5; $i++){
	    echo $correctarray[$i].","  ;
}


echo "</br>";
//nested for loops to checked each answer of the guess against each answer of the correct loop

$count=0;
for ($i=0; $i<5; $i++){

	for ($j=0; $j<5; $j++){
	
		if($correctarray[$j]==$guessarray[$i]){
		
			echo $guessarray[$i]. " is Correct! </br> " ;
			$count +=1;
		}
	   }
}

		echo "you got ".$count." correct";

?>







 	 <form method="POST" action="lab4.html">
		 <input type="submit" value = "try another one" />
	 </form>

 </body>
 </html>
