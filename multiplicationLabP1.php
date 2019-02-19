
<html>
<div id="wrapper">
<body>

<h1 id="title">Michael's Wonderful Multiplication Test</h1>

<?php

$number1=rand(0,12);
$number2=rand(0,12);
$number3 = $number2 * $number1;

echo "<p>$number1*$number2</p>" 

?>
<p>Try this Question</p>
<div id="problem">

<form action="multiplicationLabP2.php" method="post">

	<input type="hidden" name="number1" value="<?php echo $number1; ?>" />
	<input type="hidden" name="number2" value="<?php echo $number2; ?>" />
	<input type="number" name="answer"/>
	<input type="submit" value="Check Answer"/>



</form>


</body>
</div>

</html>

