// Single Level Inheritance
#include <iostream>
using namespace std;

class Animal {
    
    private:
        int feet;

    public:
        void setFeet(int feet) {
            this->feet = feet;
        }
        
        int getFeet() const {
            return feet;
        }

        void walk() {
            cout << "Walking with " << getFeet() << " feet." << endl;
        }
};

class Dog : public Animal {

    private:
        int no_of_barks;

    public:
        void setNoOfBarks(int no_of_barks) {
            this->no_of_barks = no_of_barks;
        }

        int getNoOfBarks() const {
            return no_of_barks;
        }

        void bark() {
            cout << "Barking " << getNoOfBarks() << " times." << endl;
        }

};

// For Multi Level Inheritance
class BabyDog : public Dog {

    private:
        int no_of_weeps;

    public:
        void setNoOfWeeps(int no_of_weeps) {
            this->no_of_weeps = no_of_weeps;
        }

        int getNoOfWeeps() const {
            return no_of_weeps;
        }

        void weep() {
            cout << "Weeping " << getNoOfWeeps() << " times." << endl;
        }

};

int main() {

    Dog d1;
    BabyDog d2;

    d1.setFeet(4);
    d1.setNoOfBarks(19);
    
    d2.setFeet(4);
    d2.setNoOfBarks(2);
    d2.setNoOfWeeps(7);

    d1.walk();
    d1.bark();

    cout << endl;

    d2.walk();
    d2.bark();
    d2.weep();

    return 0;
}