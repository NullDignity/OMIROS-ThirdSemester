//Hybrid inheritance is a combination of more than one type of inheritance.

#include <iostream>
using namespace std;

class Grandfather {

    private:
        string surname;

    public:
        Grandfather(string surname) {
            this->surname = surname;
        }

        void print() {
            cout << "His last name, who he got from his grandfather, is: " << surname << endl;
        }

};

class Father : public Grandfather {

    private:
        string name;

    public:
        Father(string surn, string name) : Grandfather(surn) {
            this->name = name;
        }

        void print() {
            Grandfather::print();
            cout << "His middle name, who he got from his father, is: " << name << "\t";
        }

};

class StudentTEP {

    private:
        string pvts;

    public:
        StudentTEP(string iek) {
            pvts = iek;
        }

        void print() {
            cout << " is studying at the PVTS: " << pvts << endl;
        }

};

class Son : public Father, public StudentTEP {

    private:
        int age;
        string name;

    public:
        Son(string surn, string n, string iek, string name, int age) : Father(surn, n), StudentTEP(iek) {
            this->name = name;
            this->age = age;
        }

        void print() {
            cout << name;
            cout << ", " << age << " years old,";
            StudentTEP::print();
            Father::print();

        }

};

int main() {

    Son s1("Pappas", "Ioannis", "IEK 2024", "Nikos", 20);

    s1.print();

    return 0;

}