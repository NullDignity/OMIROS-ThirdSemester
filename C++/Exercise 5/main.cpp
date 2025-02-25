#include "MyClass.h"

template <class mySwap>

void switcharoo(mySwap &a, mySwap &b) { // This only works on C++. Otherwise, we would need to call by reference (*) ALL variables we gave to the template's function.)
    mySwap temp = a;
    a = b;
    b = temp;
}

int main() {

    // Initializing

    int int_x = 10;
    int int_y = 25;
    string str_x = "Foo";
    string str_y = "Bar";
    MyClass class_x("Foo",35);
    MyClass class_y("Bar", 53);

    // Prints before Swaps

    cout << "===== BEFORE SWAP =====" << endl;
    cout << "Int X: " << int_x << endl;
    cout << "Int Y: " << int_y << endl;
    cout << "String X: " << str_x << endl;
    cout << "String Y: " << str_y << endl;
    cout << "Class X: " << class_x.getName() << " - " << class_x.getValue() << endl;
    cout << "Class Y: " << class_y.getName() << " - " << class_y.getValue() << endl;

    // Swaps

    switcharoo(int_x, int_y);
    switcharoo(str_x, str_y);
    switcharoo(class_x, class_y);

    // Print after Swaps

    cout << "===== AFTER SWAP =====" << endl;
    cout << "Int X: " << int_x << endl;
    cout << "Int Y: " << int_y << endl;
    cout << "String X: " << str_x << endl;
    cout << "String Y: " << str_y << endl;
    cout << "Class X: " << class_x.getName() << " - " << class_x.getValue() << endl;
    cout << "Class Y: " << class_y.getName() << " - " << class_y.getValue() << endl;
    
    return 0;
}