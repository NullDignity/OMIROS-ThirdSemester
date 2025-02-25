#include <iostream>
#include <iomanip>
using namespace std;

class Date {
    friend ostream & operator << (ostream &, Date &);
    friend istream & operator >> (istream &, Date &);

    private:
        int day, month, year;
};

ostream & operator << (ostream &out, Date &date) {
    out << date.day << "/" << date.month << "/" << date.year;
    return out;
}

istream & operator >> (istream &in, Date &date) {
    in >> setw(2) >> date.day;
    in.ignore(); // Ignore "/"
    in >> setw(2) >> date.month;
    in.ignore(); // Ignore "/"
    in >> setw(4) >> date.year;

    // Optionally, create a new method of the Date class which checks if it's okay.

    if (date.day > 31 || date.day <= 0)
        date.day = 1;

    if (date.month > 12 || date.month < 1)
        date.month = 1;

    if (date.day == 31 && date.month == 2)
        date.day = 1;

    if (!(date.year % 4 == 0) && date.day == 29)
        date.day = 1;

    return in;
}

int main() {

    Date date;

    cout << "Please enter the date in this format: " << endl;
    cout << "DD/MM/YYYY and press ENTER.\n";

    cin >> date;

    cout << "In full format the date provided is displayed as \"" << date << "\"\n";

    return 0;
}