using System;

public class Program
{
	public static void Main()
	{
		string a = "Alekos";
		string b = "Makis";
		string c = a+b; // "AlekosMakis"
		c = a+" "+b; // "Alekos Makis"
		Console.WriteLine(c);
		Console.WriteLine(c.Length);
		
		if (a==b) // CASE SENSITIVE
			Console.WriteLine("a and b are the same.");
		else
			Console.WriteLine("a and b are different.");
		
		// C# supports UTF-16 so most foreign characters are automatically supported.
		// if (!a.Contains("ko")), ! is "if not".
		// if, if - else, if - elseif, else
		// while, do while, for loops
		
		string[] cars = {"Volvo", "BMW", "Ford", "Mazda"}; // 0, 1, 2, 3
		foreach (string x in cars) { // BEST USED ONLY FOR EXECUTING FOR THE ENTIRE ARRAY
			Console.WriteLine(x);
		}
		
		//  for (x=0; x<4; x++) {
		//	  cat << cars[x];
		//  }
		
		string input = Console.ReadLine(); // ALWAYS returns string. if you need to use it in any other way, it must be converted.
		double weight = Convert.ToDouble(input); // there is also ToBoolean, ToInt32, ToString, more at https://learn.microsoft.com/en-us/dotnet/api/system.convert?view=net.7.0
		// OR: "double weight = Convert.ToDouble(Console.ReadLine());
		
	}
}