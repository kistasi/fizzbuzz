package main

import "fmt"

func main() {
  const target = 200

  for count := 1; count < target; count++ {
    if count % 3 == 0 && count % 5 == 0 {
      fmt.Println("FizzBuzz!");
    } else if (count % 3 == 0) {
      fmt.Println("Fizz!");
    } else if (count % 5 == 0) {
      fmt.Println("Buzz!");
    } else {
      fmt.Println(count);
    }
  }
}
