#include <iostream>

using namespace std;

int main()
{
  int number;
  int finish;

  number = 0;
  finish = 20;

  while (number < finish) {
    number++;

    if (number % 3 == 0 && number % 5 == 0) {
      cout << "FizzBuzz!" << endl;
    } else if (number % 3 == 0){
      cout << "Fizz!" << endl;
    } else if (number % 5 == 0){
      cout << "Buzz!" << endl;
    } else {
      cout << number << endl;
    }
  }

  return 0;
}