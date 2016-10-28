public class fizzbuzz {
  public static void main(String[] args) {
    final Integer finish = 20;
    int number = 0;

    while (number < finish) {
      number++;

      if (number % 3 == 0 && number % 5 == 0) {
        System.out.println("FizzBuzz!");
      } else if (number % 3 == 0) {
        System.out.println("Fizz!");
      } else if (number % 5 == 0) {
        System.out.println("Buzz!");
      } else {
        System.out.println(number);
      }
    }
  }
}
