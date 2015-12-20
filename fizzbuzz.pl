$number = 0;
$finish = 20;

while ($number < $finish) {
  $number += 1;

  if (($number % 3 == 0) && ($number % 5 == 0)) {
    print "FizzBuzz!\n";
  } elsif ($number % 3 == 0) {
    print "Fizz!\n";
  } elsif ($number % 5 == 0) {
    print "Buzz!\n";
  } else {
    print "$number\n";
  }
}
