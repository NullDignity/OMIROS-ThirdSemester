class Program
{
    // Function to add two numbers
    public static int AddNumbers(int a, int b) // was void
    {
        return a + b;
    }


    public static int CalculateSquare(int num)
    {
        return num * num;
    }


    public static void DisplayResult(int result) // was double
    {
        Console.WriteLine("The result is: " + result);
    }

    public static void Main(string[] args)
    {
        int num1 = 10;
        int num2 = 20;

        // Call to AddNumbers with incorrect parameters
        AddNumbers(num1, num2); // only gave num1

        // Calculate square of num1
        int square = CalculateSquare(num1);

        // Call DisplayResult with the wrong argument type
        DisplayResult(square); // was "square" (string)

        // Adding the numbers and printing the result
        int sum = AddNumbers(num1, num2);
        Console.WriteLine("The sum is: " + sum);
    }
}