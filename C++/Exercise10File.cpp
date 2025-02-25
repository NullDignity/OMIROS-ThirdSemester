#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {

    char source[] = "input.txt";
    string text;

    ifstream fileWrite(source);
    char c;

    while (fileWrite.get(c)) {
        if (c=='A' || c=='a')
            c = '#';
        text += c;
    }

    fileWrite.close();

    ofstream out("output.txt");
    out << text;
    out.close();
    cout << "Content of the file is: " << text << endl;

    return 0;
}