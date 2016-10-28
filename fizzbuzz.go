package main

import "fmt"

func main() {
  var number = 0
  const finish = 20

  for (finish > number) {
    number++

    if number % 3 == 0 && number % 5 == 0 {
      fmt.Println("FizzBuzz!");
    } else if (number % 3 == 0) {
      fmt.Println("Fizz!");
    } else if (number % 5 == 0) {
      fmt.Println("Buzz!");
    } else {
      fmt.Println(number);
    }
  }
}
