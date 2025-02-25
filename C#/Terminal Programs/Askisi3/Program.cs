using System;

class Program
{
    static void Main()
    {
        // Δήλωση πίνακα με τα ονόματα των μαθητών
        string[] students = new string[] { "Alice", "Bob", "Charlie", "David", "Eve" };
        int[] grades = new int[] { 75, 82, 90, 67, 85 };
        int sum = 0;
        double average;
        
        // Εισαγωγή βαθμών για κάθε μαθητή
        for (int i = 0; i < students.Length; i++) // was <=
        {
            Console.WriteLine("Εισάγετε το βαθμό για τον μαθητή " + students[i] + ":");
            grades[i] = Convert.ToInt32(Console.ReadLine());
        }

        // Υπολογισμός του μέσου όρου
        for (int i = 0; i < grades.Length; i++)
        {
            sum = sum + grades[i];
        }

        // Υπολογισμός του μέσου όρου
        average = sum / students.Length;

        // Εμφάνιση του μέσου όρου
        Console.WriteLine("Ο μέσος όρος των βαθμών είναι: " + average);

        // Έλεγχος για μαθητές με βαθμό πάνω από τον μέσο όρο
        for (int i = 0; i < students.Length; i++) {
            if (grades[i] > average)
                Console.WriteLine(students[i] + " έχει βαθμό πάνω από τον μέσο όρο.");
        }

        /* while (i < students.Length)
        {
            if (grades[i] > average)  // Ελέγξτε αν ο βαθμός είναι μεγαλύτερος από τον μέσο όρο
            {
                Console.WriteLine(students[i] + " έχει βαθμό πάνω από τον μέσο όρο.");
            }
            i++;
        } */

        // Έλεγχος για μαθητές με βαθμό κάτω από 70
        for (int i = 0; i < students.Length; i++)
        {
            if (grades[i] < 70)  // Ελέγξτε αν ο βαθμός είναι κάτω από 70
            {
                Console.WriteLine(students[i] + " έχει βαθμό κάτω από 70.");
            }
        }
    }
}