#ifndef STACK_H  //Οι εντολές #ifndef, #define και #endif λειτουργούν συνδυαστικά.  
	#define STACK_H  //Δεν είναι απαραίτητες, αλλά κάνουν τη δημιουργία αντικείμένων (από το 2ο αντικείμενο και μετά) πιο γρήγορη.
	
	#include <iostream> //για τα cout/cin
	#include <cstring>  //για να λειτουργήσει η strlen() που μετρά το πλήθος των στοιχείων ενός αλφαριθμητικού
	#include <cstdlib>  //για τη χρήση της εντολής system()
	//#include <cstdio>  //για τη χρήση της printf για λόγους debugging
	#include <ctime>  //για τη χρήση της time() μέσα στην srand()
	using namespace std;
	
	#define SIZE 5 //Το μέγιστο μέγεθος της στοίβας
	
	class Stack
	{
		private:
			char stack[SIZE]; //Η δομή της στοίβας υλοποιημένης με μονοδιάστατο πίνακα χαρακτήρων
			int top; //μεταβλητή που ορίζει το τελευταίο στοιχείο που προσπελαύνεται από τη στοίβα
			
		public:
			Stack(); //constructor μέθοδος
			
			//setters
			void setStack(char);  //εισαγωγή ενός στοιχείου στη στοίβα - Τμήμα της μεθόδου push()
			void setTop(int);  //Αλλαγή του index της στοίβας - Τμήμα της μεθόδου push()/pop()
			//getters
			char getStack() const; //Εμφανίζει το τελευταίο στοιχείο της στοίβας 
			int getTop() const;  //Εμφανίζει το index του τελευταίου στοιχείου της στοίβας
			
			void print();  //H print δεν επιτρέπεται να γραφεί ως const μιας και καλεί μέσα στον κώδικα της την pop()
			void push(char);  //ώθηση μέσα στη στοίβα - αλλάζει τη στοίβα, άρα δεν πρέπει να γραφεί const.
			char pop();//απώθηση από τη στοίβα - αλλάζει τη στοίβα, άρα δεν πρέπει να γραφεί const.
	};
#endif
