#include "Vehicle.h"

int main() {

    Vehicle veh1[2];
    int i;

    cout << "\nThe elements of the array are:";
    cout << "\n--------------------------------------\n";
    for (i=0; i < 2; i++) {
        cout <<"Array["<<i<<"]: ", veh1[i];
        cout << " RAM_Block["<<&veh1[i]<<"]\n";
    }

    int N;

    cout << "\nEnter number of elements: ";
    cin >> N;
    Vehicle* veh2 = new Vehicle[N];

    if (veh2 == NULL || N == 0) {
        cout << "Memory not allocated.\n";
        exit(1);
    } else {
        cout << "\nThe elements of the array are:";
        cout << "\n--------------------------------------\n";
        for (i=0; i<N; i++) {
            cout <<"Array["<<i<<"]: ", veh2[i];
            cout << " RAM_Block["<<&veh2[i]<<"]\n";
        }
    }

    cout << "\n"; // for spacing between RAM printing and object destruction
    delete [] veh2;

    return 0;
}