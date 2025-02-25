using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ATM_Project {
    internal class Accounts {
        public string AFM { get; set; }
        public string PIN { get; set; }
        public double Balance { get; set; }

        public Accounts() {
            Random rnd = new Random();
            AFM =  Convert.ToString(rnd.NextInt64(10000000000, 99999999999));
            PIN = Convert.ToString(rnd.Next(1000,9999));
            Balance = 0.00;
        }

        public Accounts(string new_AFM, string new_PIN, double new_balance) {
            // Χειροκίνητη εισαγωγή. Δεν θα γίνουν έλεγχοι.
            AFM = new_AFM;
            PIN = new_PIN;
            Balance = new_balance;
        }

        public void deposit(double amount) {
            Balance += amount;
        }

        public void withdraw(double amount) {
            Balance -= amount;
        }
 
    }
}
