#include <stdio.h>

void main() {
  const int target = 200;

  for (int count = 1; count < target; count++) {
    if (count % 3 == 0 && count % 5 == 0) {
      printf("FizzBuzz!\n");
    } else if (count % 3 == 0){
      printf("Fizz!\n");
    } else if (count % 5 == 0){
      printf("Buzz!\n");
    } else {
      printf("%d\n", count);
    }
  }
}
