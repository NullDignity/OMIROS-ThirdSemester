#include <iostream>
#include <ctime>
#include <cstdlib> // for rand - srand
using namespace std;

int main() {

    // This pointer will hold the base address of the block created.
    int *array, size, i;

    // Give the number of elements for the array.
    cout << "Enter number of elements: ";
    cin >> size;

    array = new int[size]; // "new" is the equivalent of malloc/calloc

    if (array == NULL || size == 0) {
        cout << "Memory not allocated.\n";
        exit(1);
    } else {
        cout << "Memory has been successfully allocated using NEW.";

        srand(time(0));
        for (i=0; i<size; i++) {
            array[i] = 1+rand()%9;
        }

        cout << "\n\nThe elements of the array are:";
        cout << "\n--------------------------------------\n";
        for (i=0; i<size; i++) {
            cout <<"Array["<<i<<"]: " << array[i];
            cout << " RAM_Block["<<&array[i]<<"]\n";
        }
    }

    delete [] array; // "delete" is the equivalent of free

    return 0;
}