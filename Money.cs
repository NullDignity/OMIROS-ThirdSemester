using ATM_Project;

class Program {
    static void Main() {

        Console.OutputEncoding = System.Text.Encoding.UTF8; // Για χρήση Ελληνικών Χαρακτήρων.

        string selection = null;
        double amount;
        bool found;

        string afm_input;
        string pin_input;

        List<Accounts> accounts = new List<Accounts>();

        accounts.Add(new Accounts());
        accounts.Add(new Accounts());
        accounts.Add(new Accounts());
        accounts.Add(new Accounts("18030248531", "5674", 1023.54));
        accounts.Add(new Accounts("23059886754", "9583", 254.02));

        // DEBUG - ΜΟΝΟ ΓΙΑ ΑΣΚΗΣΗ
        Console.WriteLine("ΠΡΟΣΟΧΗ - Δίνονται τα στοιχεία των λογαριασμών εφόσον είναι τυχαία, εκτός των τελευταίων δύο.");
        Console.WriteLine("Παρακαλώ σημειώστε για συνέχεια εξέτασης.\n");

        foreach (Accounts account in accounts) {
            Console.WriteLine($"ΑΦΜ: {account.AFM}");
            Console.WriteLine($"PIN: {account.PIN}");
            Console.WriteLine($"Υπόλοιπο {account.Balance.ToString("F2")}\n");
        }

        Console.ReadKey();
        Console.Clear();

        while (selection != "4") {

            Console.WriteLine("Παρακαλώ επιλέξτε την εξυπηρέτηση που χρειάζεστε.\n");

            Console.WriteLine("1. Ανάληψη\n");
            Console.WriteLine("2. Κατάθεση\n");
            Console.WriteLine("3. Ερώτηση Υπολοίπου\n");
            Console.WriteLine("4. Έξοδος\n\n");

            Console.WriteLine("Επιλογή:");
            selection = Console.ReadLine();

            while (selection != "1" && selection != "2" && selection != "3" && selection != "4") {
                Console.WriteLine("\nΠαρακαλώ εισάγεται την εξυπηρέτηση που χρειάζεστε:");
                selection = Console.ReadLine();
            }

            if (selection != "4") {

                Console.Clear();

                Console.WriteLine("Παρακαλώ εισάγεται τον αριθμό ΑΦΜ του λογαριασμού σας: ");
                afm_input = Console.ReadLine();
                Console.WriteLine("Παρακαλώ εισάγεται τον αριθμό PIN του λογαριασμού σας: ");
                pin_input = Console.ReadLine();

                Console.Clear();
                found = false;

                foreach (Accounts account in accounts) {
                    if (account.AFM == afm_input && account.PIN == pin_input) {
                        found = true;
                        if (selection == "1") {
                            Console.WriteLine("Το υπόλοιπο του λογαριασμού σας είναι: ");
                            Console.WriteLine(account.Balance.ToString("F2"), "\n");

                            Console.WriteLine("Πόσο που επιθυμείτε για ανάληψη: ");
                            amount = Convert.ToDouble(Console.ReadLine());
                            while (account.Balance - amount < 0) {
                                Console.WriteLine("Δεν υπάρχουν αρκετά χρήματα στον λογαριασμό για αυτήν την ανάληψη. Παρακαλώ ξαναδοκιμάστε.");
                                amount = Convert.ToDouble(Console.ReadLine());
                            }
                            account.withdraw(amount);

                            Console.WriteLine("\nΝέο Υπόλοιπο: ");
                            Console.WriteLine(account.Balance.ToString("F2"), "\n");
                            Console.ReadKey();
                        }

                        if (selection == "2") {
                            Console.WriteLine("Το υπόλοιπο του λογαριασμού σας είναι: ");
                            Console.WriteLine(account.Balance.ToString("F2"), "\n");

                            Console.WriteLine("Πόσο που επιθυμείτε για κατάθεση: ");
                            amount = Convert.ToDouble(Console.ReadLine());
                            account.deposit(amount);

                            Console.WriteLine("\nΝέο Υπόλοιπο: ");
                            Console.WriteLine(account.Balance.ToString("F2"), "\n");
                            Console.ReadKey();
                        }

                        if (selection == "3") {
                            Console.WriteLine("Το υπόλοιπο του λογαριασμού σας είναι: ");
                            Console.WriteLine(account.Balance.ToString("F2"), "\n");
                            Console.ReadKey();
                        }
                    }
                }

                if (!found) {
                            Console.WriteLine("Το ΑΦΜ ή το PIN που εισάγατε ήταν λανθασμένο. Παρακαλώ ξαναεπιλέξτε την επιθυμητή επιλογή και προσπαθήστε ξανά.");
                            Console.ReadKey();
                }

                Console.Clear();
            }
        }
    }
}