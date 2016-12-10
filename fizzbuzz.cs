public class FizzBuzz
{
   public static void Main()
   {
      int number;
      int finish;

      number = 0;
      finish = 20;

      while (number < finish)
      {
        number++;

        if (number % 3 == 0 & number % 5 == 0)
        {
          System.Console.WriteLine("FizzBuzz!");
        } else if (number % 3 == 0) {
          System.Console.WriteLine("Fizz!");
        } else if (number % 5 == 0) {
          System.Console.WriteLine("Buzz!");
        } else {
          System.Console.WriteLine(number);
        }
      }
   }
}
