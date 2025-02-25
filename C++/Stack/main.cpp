#include "Stack.h"

int main()
{
	Stack s1; //Δημιουργώ μία στοίβα (καλείται ο constructor)
	size_t number_of_pushed_elements, number_of_popped_elements;
	char random_stack_element;	

	//Ωθώ (push) τιμές μέσα στη στοίβα.
	cout<<"How many random elements do you want to PUSH inside the stack? (Type a positive integer and press ENTER): "<<endl;
	cin>>number_of_pushed_elements;
	
	cout<<endl<<endl;
	
	srand(time(NULL));//αρχικοποίηση της παραγωγής τυχαίων αριθμών ακυρώνοντας την ψευδοτυχαιότητα 
	                  //(μόνο σε C/C++ είναι απαραίτητο, αλλιώς παράγει συνεχώς τα ίδια στοιχεία)
	for(size_t i=0; i<number_of_pushed_elements; i++)
	{
		random_stack_element = 33 + rand()%(127-33);  //Οι εκτυπώσιμοι λατινικοί ASCII χαρακτήρες είναι από το 33 ώς το 127 του πίνακα ASCII
		//printf("Value = %d.\n", random_stack_element);  //Χρησιμοποιείται μόνο για deugging, ώστε να εξασφαλίσουμε ότι οι τιμές που παράγονται είναι από 33 ώς και 127. Στο τελικό πρόγραμμα δε χρειάζεται.
		s1.push(random_stack_element);
	}
	
	//Αποθώ (pop) τιμές από τη στοίβα.
	//s1.print();   //Η εντολή αυτή λειτουργεί και εκτυπώνει (απωθεί) τόσα στοιχεία, όσα εισήχθησαν μέσα στη στοίβα.
				    //Αλλά, αν κληθεί η print(), δε θα φανεί το φαινόμενο της απώθησης από άδεια στοίβα που οδηγεί σε μήνυμα λάθους.
					//Οπότε εναλλακτικά, καλούμε το χρήστη να επιλέξει το πλήθος των στοιχείων που θα γίνουν pop, ώστε να υπάρξει η δυαντότητα να εμφανιστεί μήνυμα λάθους.
	cout<<"\n\nHow many random elements do you want to POP outside of the stack (L.I.F.O. mode of popping)?"<<endl;
	cout<< "(Type a positive integer and press ENTER): "<<endl;
	cin>>number_of_popped_elements;
	
	cout << "----------------------------------------" << endl;
	for(size_t i=0; i<number_of_popped_elements; i++)
		cout<<s1.pop()<<( s1.getTop() != 0 ? "'\n" : "\n");
	
	system("PAUSE > nul");
	return 0;
}
