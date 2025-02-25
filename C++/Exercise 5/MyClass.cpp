#include "MyClass.h"

MyClass::MyClass(string name, int value) {
    this->name = name;
    this->value = value;
}

void MyClass::SetAll(string name, int value) {
    this->name = name;
    this->value = value;
}

void MyClass::SetName(string name) {
    this->name = name;
}

void MyClass::SetValue(int value) {
    this->value = value;
}

string MyClass::getName() const {
    return this->name;
}

int MyClass::getValue() const {
    return this->value;
}

void MyClass::print() const {
    cout << this->name << ": " << this->value << endl;
}

