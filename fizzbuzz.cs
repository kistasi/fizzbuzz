public class FizzBuzz
{
   public static void Main()
   {
      const int target = 200;

      for (int count = 1; count < target; count++) {
        if (count % 3 == 0 & count % 5 == 0) {
          System.Console.WriteLine("FizzBuzz!");
        } else if (count % 3 == 0) {
          System.Console.WriteLine("Fizz!");
        } else if (count % 5 == 0) {
          System.Console.WriteLine("Buzz!");
        } else {
          System.Console.WriteLine(count);
        }
      }
   }
}
