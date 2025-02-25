using System;

class Program
{
    static void Main()
    {
        // Δήλωση πίνακα
        int[] numbers = new int[] { 12, 45, 23, 67, 4, 89, 21 };
        int largest = numbers[0]; // logical, but max should be initialized with the first element of the array, not a 0
        
        // Ελέγχουμε αν ο πίνακας είναι κενός
        if (numbers.Length == 0) // was = and length
        {
            Console.WriteLine("Ο πίνακας είναι κενός.");
        }
        
        // Βρίσκουμε τον μεγαλύτερο αριθμό μέσα στον πίνακα
        for (int i = 0; i < numbers.Length; i++) // was i < 8
        {
            if (numbers[i] > largest)
                largest = numbers[i];
        }
        
        // Εμφανίζουμε το μεγαλύτερο αριθμό
        Console.WriteLine("Ο μεγαλύτερος αριθμός στον πίνακα είναι: " + largest);
    }
}