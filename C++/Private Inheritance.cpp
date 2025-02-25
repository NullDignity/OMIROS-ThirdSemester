#include <iostream>
using namespace std;

class Base {
    
    private:
        int x_private;
    protected:
        int y_protected;
    public:
        int z_public;

    public:
        Base() {
            setXPrivate(1);
            setYProtected(2);
            setZPublic(3);
        }

        void setXPrivate(int x_private) {
            this->x_private = x_private;
        }

        void setYProtected(int y_protected) {
            this->y_protected = y_protected;
        }

        void setZPublic(int z_public) {
            this->z_public = z_public;
        }

        int getXPrivate() const {
            return this->x_private;
        }

        int getYProtected() const {
            return this->y_protected;
        }

        int getZPublic() const {
            return this->z_public;
        }

};

class Derive : private Base {

    public:
        void setParentsAll(int a, int b, int c) {
            // x_private = a; // ERROR, due to private, so it is not accessibl eoutside parent.
            setXPrivate(a);
            y_protected = b;
            z_public = c;
        }

        void showParentsData() {
            // cout << xPrivate // error, like before
            cout << "Value of Base Class \"x_private\" from " << "Derive class is printed as " << getXPrivate() << endl;
            cout << "Value of Base Class \"y_protected\" from " << "Derive class is printed as " << y_protected << endl;
            cout << "Value of Base Class \"z_public\" from " << " Derive class is printed as " << z_public << endl;
        }

};

int main() {

    Derive d;
    d.showParentsData();

    //d.x_private = 11; // ERROR due to private
    //d.setXPrivate(11);

    //d.y_protected = 12; // ERROR since protected
    //d.setYProtected(12);

    //d.z_public = 13; // ERROR since public
    //d.setZPublic(13); // is not accessible outside parent

    d.setParentsAll(101, 102, 103);
    d.showParentsData();

    return 0;
}