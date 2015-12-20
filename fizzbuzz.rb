number = 0
finish = 20

while number < finish
  number +=1

  if number % 3 == 0 and number % 5 == 0
    puts "FizzBuzz!"
  elsif number % 3 == 0
    puts "Fizz!"
  elsif number % 5 == 0
    puts "Buzz!"
  else
    puts number
  end
end
