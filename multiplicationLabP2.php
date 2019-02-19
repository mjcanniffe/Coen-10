<html>
<body>
<h1>Michael's Woderful Multiplication Test</h1>


<?php


$number1 = $_POST["number1"];
$number2 = $_POST["number2"];
$number3 = $_POST["answer"];



if($number1*$number2 == $number3){
	echo "Great Job!";
}

else{
	echo "That's not correct, the correct answer is: ".$number1*$number2 ;
}



?>


<form method="post" action="multiplicationLabP1.php">
<button type="submit"> Try another problem </button >
</form>


</body>
</html>
