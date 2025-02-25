#include <iostream>
#include <exception>
using namespace std;

void throwException() {
    try {
        cout << "\tFunction throwException throws an exception!\n"; // 2
        throw exception();
    } catch(exception &caughtException) {
        cout << "\nException handledin Function throwException"; // 3
        cout << "\n\tFunction throwException rethrows exception"; // 4
        throw;
    }
    cout << "Not printed message.\n";
}

int main() {

    try {
        cout << "main invokes function throwException\n"; // 1
        throwException();
        cout << "Not printed message.\n";
    } catch(exception &caughtException) {
        cout << "\n\nException handled in main.\n"; // 5
    }

    cout << "Other commands after catch...\n";
    return 0;
}