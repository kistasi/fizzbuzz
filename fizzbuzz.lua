for number = 1, 1000 do
    if (number % 15 == 0) then
        print("FizzBuzz!")
    elseif (number % 3 == 0) then
        print("Fizz!")
    elseif (number % 5 == 0) then
        print("Buzz!")
    else
        print(number)
    end
end
