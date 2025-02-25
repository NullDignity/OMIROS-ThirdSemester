#include <iostream>
using namespace std;

int x = 1; // Global Variable, contained in the RAM until the program shuts off
           // Auto would not work here, as it requires scope.

void useLocal() {
    int x = 25; // Local Variable, contained in the RAM until the function is over
    cout << x << endl;
    ++x;
    cout << x << endl;
}

void useAuto() {
    auto x = 35; // Variable where we do not know what type it is.
    cout << x << endl;
    ++x;
    cout << x << endl;
}

/*void useRegister() {      DEPRECATED
    register int x = 45;    Variable that sends straight to CPU without going through the cache.
    cout << x << endl;
    ++x;
    cout << x << endl;
}*/

void useStatic() {
    static int x = 50; // Static Variable, can never be changed and does not die on function completion.
    cout << x << endl;
    ++x;
    cout << x << endl;
}

void useGlobal() {
    cout << x << endl;
    x *= 10;
    cout << x << endl;
}

int main() {

    int x = 5;
    cout << x << endl; // 5. If int x = 5 did not exist, it would use the global variable, thus 1.


    // "if true"
    {
        int x = 7;
        cout << x << endl; // 7
    }

    cout << x << endl; // 5

    useLocal(); // 25, 26 
    useAuto(); // 35, 36
    useStatic(); // 50, 51
    useGlobal(); // 1, 10

    useLocal(); // 25, 26
    useAuto(); // 35, 36
    useStatic(); // 51, 52
    useGlobal(); // 10, 100

    cout << x << endl; // 5
    cout << ::x << endl; // "::x" orders the cout to print the global variable.
                         // 100
    return 0;
}