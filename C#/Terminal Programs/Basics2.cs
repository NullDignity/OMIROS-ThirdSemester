using System;
using System.IO;

// FROM DOCUMENT CS2.pdf

using System;
					
public class Program
{
	public static void Main()
	{
		int [] myNum = {10,20,30,40}; // first method, slow and manual insertion of values
        int [] myNum2 = new int[4]; // second method, also used in java. "new" allocates 4 integers worth of memory to the array, therefore 4 slots
        string [] myString = new string[10] // also works for strings. allocates 10 words/strings (with space separation) worth of memory to the array
        myNum2[2] = 2;
        Console.WriteLine(myNum[0]); // 0. C# does not initialize with garbage values
        myNum[3]++; // 0 -> 1 
	}
}

