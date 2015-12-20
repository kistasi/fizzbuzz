<?php
$number = 0;
$finish = 20;

while ($number < $finish) {
	$number++;

	if ($number % 3 === 0 and $number % 5 === 0) {
		echo "FizzBuzz!\n";
	} else if ($number % 3 == 0) {
		echo "Fizz!\n";
	} else if ($number % 5 == 0) {
		echo "Buzz!\n";
	} else {
		echo "$number\n";
	}
}
