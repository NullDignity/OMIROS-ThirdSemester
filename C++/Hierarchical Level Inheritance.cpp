#include <iostream>
using namespace std;

class Shape {
    
    public:
        int side_a, side_b;

    void setData(int side_a, int side_b) {
        this->side_a = side_a;
        this->side_b = side_b;
    }

};

class Rectangle : public Shape {

    public:
        int getRectArea() const {
            return side_a * side_b;
        }

};

class Triangle : public Shape {

    public:
        int getTriangleArea() const {
            return 0.5 * side_a * side_b;
        }

};

// Even if they inherit, they use the variables of 'Shape' and not their own.

int main() {

    Rectangle r;
    Triangle t;

    int length = 3, breadth = 4, base = 5, height = 6;

    r.setData(length, breadth);
    t.setData(base,height);

    cout << "Area of rectangle is: " << r.getRectArea() << endl;
    cout << "Area of triangle is: " << t.getTriangleArea() << endl;

    return 0;

}
