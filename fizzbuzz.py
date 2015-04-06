number = 0
finish = 20

while number < finish:
	number = number + 1

	if number % 3 == 0 and number % 5 == 0:
		print "FizzBuzz!"
	else:
		if number % 3 == 0:
			print "Fizz!"	
		else:
			if number % 5 == 0:
				print "Buzz!"
			else:
				print number
