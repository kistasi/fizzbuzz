<?php
$number = 0;
$finish = 20;

while ($number < $finish) {
	$number++;

	if ($number % 3 === 0 and $number % 5 === 0) {
		echo "FizzBuzz!";
		echo "\n";

	} else if ($number % 3 == 0) {
		echo "Fizz!";
		echo "\n";
	} else if ($number % 5 == 0) {
		echo "Buzz!";
		echo "\n";
	} else {
		echo $number;
		echo "\n";
	}
}
