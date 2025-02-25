using System;

public class Program
{

    static void test() {
        Console.WriteLine("Hello Mr. President!");
    }

    static void prNt(int x) {
        for (int i = 1; i <= x; i++)
            Console.WriteLine(i);
    }

    static int add(int x, int y) {
        return x + y;
    }

	public static void Main()
	{

        /*
        string [] week = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];

        Console.WriteLine("Please enter the number of the week you wish to see: ");
        int weekchoice = Convert.ToInt32(Console.ReadLine());
        
        while (weekchoice > 7 || weekchoice < 1) {
            Console.WriteLine("Invalid Input. Please try again: ");
            weekchoice = Convert.ToInt32(Console.ReadLine());
        }

        Console.WriteLine(week[weekchoice-1]);
        */

        test();
        prNt(8);
        Console.WriteLine(add(24, 4));

	}
}