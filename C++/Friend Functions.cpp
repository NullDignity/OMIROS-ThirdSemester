#include <iostream>
#include <cstdlib>
using namespace std;

// class Car; -- Also see Class Declarations.

class Count {

    friend void setX(Count &, int); // "friend" is a keyword 

    public:
        Count() {
            x = 0;
        }

        // Or... Count() {x=0;}. Pretty simple.

        /*
        ORRRR... IF YOU'RE AN ASSHAT...
        Count() : x(0) {
            ...
        }
        */

       /*
       Or if you PARTICULARLY hate yourself,
       Count() : x(0) {...} -- Cause fuck you.
       */

        void print() {
            cout << x << endl;
        }

    private:
        int x;

};

int main() {

    Count counter;

    cout << "Counter.x is equal to ";
    counter.print();

    setX(counter, 8);

    cout << "Counter.x is equal to ";
    counter.print();

    return 0;    

}

void setX(Count &c, int v) {
    c.x = v;
}