class Program
{
    static void Main()
    {
        // Δηλώνουμε τις μεταβλητές
        int length; // was "10"
        int width; // was 5
        int area;
        
        // Είσοδος για το μήκος και το πλάτος
        Console.WriteLine("Εισάγετε το μήκος του ορθογωνίου: ");
        length = Convert.ToInt32(Console.ReadLine()); // convert.toint32 was missing

        Console.WriteLine("Εισάγετε το πλάτος του ορθογωνίου: ");
        width = Convert.ToInt32(Console.ReadLine());

        // Υπολογισμός επιφάνειας
        area = length * width;

        Console.WriteLine("Η επιφάνεια του ορθογωνίου είναι: " + area);
    }
}