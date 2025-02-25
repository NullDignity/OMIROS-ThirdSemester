#include <iostream>
using namespace std;

// try, catch, throw. Exceptions and error-handling.
// A try block is code that will attempt to happen. If there is an issue, or some sort of error, it automatically goes to catch. throw is simply a printing command, meant for error logging.

float division(int a, int b) {
    if (b==0)
        throw "Division by zero condition!";
    else
        return a/b;
}

int main() {

    int x = 50, y = 0;
    float z = 0;

    try {
        z = division(x,y);
        cout << z << endl;
    }

    catch(const char *msg) {
        cerr << "ERROR\n";
        cerr << msg << endl;
    }

    return 0;
}