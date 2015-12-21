Program FizzBuzz(output);
var
  number : integer;
  finish : integer;

begin
  number := 0;
  finish := 20;

  while number < finish do
  begin
      number := number + 1;

      if number mod 15 = 0 then
        writeln('FizzBuzz!')
      else if number mod 3 = 0 then
        writeln('Fizz!')
      else if number mod 5 = 0 then
        writeln('Buzz!')
      else
        writeln(number)
  end;
end.
