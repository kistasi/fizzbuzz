#include <iostream>

int main() {
  const int target = 200;

  for (int count = 1; count < target; count++) {
    if (count % 3 == 0 && count % 5 == 0) {
      std::cout << "FizzBuzz!" << std::endl;
    } else if (count % 3 == 0){
      std::cout << "Fizz!" << std::endl;
    } else if (count % 5 == 0){
      std::cout << "Buzz!" << std::endl;
    } else {
      std::cout << count << std::endl;
    }
  }
}
