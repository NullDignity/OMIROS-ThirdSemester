#include <iostream>
using namespace std;

template <class GenericVariable> // Initializes a new form of variable/class

GenericVariable addTwo(GenericVariable a, GenericVariable b) {
    return a+b;
}

/* Overloaded Functions
int addTwo(int a, int b) {
    return a+b;
}

double addTwo(double a, double b) {
    return a+b; 
} */

int main() {

    cout << addTwo(1, 2) << endl;
    cout << addTwo(1.5, 3.2) << endl;

    return 0;
}