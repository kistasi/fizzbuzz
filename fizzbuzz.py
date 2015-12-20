number = 0
finish = 20

while number < finish:
    number = number + 1

    if number % 3 == 0 and number % 5 == 0:
        print('FizzBuzz!')
    elif number % 3 == 0:
        print('Fizz!')
    elif number % 5 == 0:
        print('Buzz!')
    else:
        print(number)
