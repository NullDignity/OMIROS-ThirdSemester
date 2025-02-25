#include <iostream>
using namespace std;

class Check {
    private:
        int i;

    public:
        Check(): i(0) {} // modern method of representing a constructor in C++.
        /*
        Check() {
            i=0;
        }
        */

        Check operator ++ () { // Overrides the use of '++' as a keyword.
            Check temp;
            temp.i = ++i;
            return temp;
        }

        // Int inside bracket indicates postfix increment.
        Check operator ++ (int) {
            Check temp;
            temp.i = i++;
            return temp;
        }

        void Display() {
            cout << "i = " << i << endl;
        }
};

int main() {

    Check obj, obj1;
    obj.Display(); // 0
    obj1.Display(); // 0

    // Operator function is called, only then the value of obj is assigned to the object.
    obj1 = ++obj;
    obj.Display(); // 1
    obj1.Display(); // 1

    //Assigns value of obj to obj1, only then operator function is called.
    obj1 = obj++;
    obj.Display(); // 2
    obj1.Display(); // 1

    return 0;

}