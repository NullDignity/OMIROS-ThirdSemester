﻿class Program
{
    // Συνάρτηση για τον πολλαπλασιασμό δύο αριθμών
    public static int MultiplyNumbers(int a, int b)
    {
        Console.WriteLine("Πολλαπλασιασμός αριθμών...");
        return a * b; // was + (addition)
    }

    // Συνάρτηση για να ελέγξει αν ένας αριθμός είναι άρτιος
    public static bool IsEven(int num) // was string
    {
        if (num % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Συνάρτηση για να χαιρετήσει τον χρήστη
    public static string GreetUser(string name)
    {
        return "Γειά σου, " + name;
    }

    public static void Main(string[] args)
    {
        int number1 = 5;
        int number2 = 3;
        string name = "Alice";

        // Κλήση της συνάρτησης MultiplyNumbers με σωστά ορίσματα
        int product = MultiplyNumbers(number1, number2);

        Console.WriteLine("Το γινόμενο είναι: " + product);

        // Έλεγχος αν ο αριθμός number1 είναι άρτιος
        bool result = IsEven(number1); // was string
        Console.WriteLine("Ο αριθμός 1 είναι άρτιος; " + result);

        // Κλήση της συνάρτησης GreetUser
        string greeting = GreetUser(name);
        Console.WriteLine(greeting);

        // Λανθασμένη χρήση της επιστροφής τιμής (συνάρτηση void που περιμένει επιστροφή τιμής)
        int greetLength = GreetUser(name).Length; // added .Length
        Console.WriteLine("Μήκος χαιρετισμού: " + greetLength);
    }
}