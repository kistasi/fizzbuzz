<?php

foreach (range(0, 1000) as $number) {
	if ($number % 15 === 0) {
		echo "FizzBuzz!\n";
	} else if ($number % 3 == 0) {
		echo "Fizz!\n";
	} else if ($number % 5 == 0) {
		echo "Buzz!\n";
	} else {
		echo "$number\n";
	}
}
