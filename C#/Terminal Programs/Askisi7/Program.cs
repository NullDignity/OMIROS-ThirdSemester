class Program {

    static public void Main() {

        List <double> numbers_list = new List<double>();
        double number;

        do {
            Console.WriteLine("Please enter a number (0 to end insertion): ");
            number = Convert.ToDouble(Console.ReadLine());
            
            if (number != 0)
                numbers_list.Add(number);
            
        } while(number != 0);

        Console.WriteLine("===========");
        numbers_list.Sort();

        foreach (double s in numbers_list)
            Console.WriteLine(s);

    }
}