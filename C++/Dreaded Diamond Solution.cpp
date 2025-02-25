// Virtual Access Specifier - Solution to the Dreaded Diamond Problem
#include <iostream>
using namespace std;

class Base {
    public:
        int base_public;
};

class Derive1 : virtual public Base {
    public:
        int derive1_public;
};

class Derive2 : virtual public Base {
    public:
        int derive2_public;
};

class Derive3 : public Derive1, public Derive2 {
    public:
        int product() {
            return base_public * derive1_public * derive2_public;
        }
};

int main() {

    Derive3 d;

    d.base_public = 1;
    d.derive1_public = 2;
    d.derive2_public = 3;

    cout << "Product is: " << d.product() << ".\n\n";

    return 0;
}
