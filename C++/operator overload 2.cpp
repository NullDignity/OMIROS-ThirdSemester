#include <iostream>
#include <iomanip>
using namespace std;

class PhoneNumber {
    friend ostream & operator << (ostream &, PhoneNumber &);
    friend istream & operator >> (istream &, PhoneNumber &);

    private: // or public, if you want the extra code in main to work
        char areaCode[4], exchange[4], line[5]; // the 5th character of 'line' is ENTER.
};

ostream & operator << (ostream &out, PhoneNumber &num) {
    out << "(" << num.areaCode << ") " << num.exchange << "-" << num.line;
    return out;
}

istream & operator >> (istream &in, PhoneNumber &num) {
    in.ignore(); // Ignore "("
    in >> setw(4) >> num.areaCode;
    in.ignore(2); // Ignore ") "
    in >> setw(4) >> num.exchange;
    in.ignore(); // Ignore "-"
    in >> setw(5) >> num.line;
    return in;
}

int main() {

    PhoneNumber phone;

    cout << "Enter a phone number in the following format: " << endl;
    cout << "(NNN) NNN-NNNN and press ENTER.\n";

    cin >> phone;

    /*
    // Requires public in the PhoneNumber class to work.
    cout << "Your phone number consists of the following parts:\n";
    cout << "\tArea Code: " << phone.areaCode << endl;
    cout << "\tExchange: " << phone.exchange << endl;
    cout << "\tLine: " << phone.line << endl;
    */

    cout << "In full format the phone number is displayed as \"" << phone << "\"\n";

    return 0;
}