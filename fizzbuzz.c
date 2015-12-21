#include <stdio.h>

extern int number;
extern int finish;

int main(void)
{
    int number;
    int finish;

    number = 0;
    finish = 20;

    while (number < finish) {
      number++;

      if (number % 3 == 0 && number % 5 == 0) {
        printf("FizzBuzz!\n");
      } else if (number % 3 == 0){
        printf("Fizz!\n");
      } else if (number % 5 == 0){
        printf("Buzz!\n");
      } else {
        printf("%d\n", number);
      }
    }
}
