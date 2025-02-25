#ifndef MYCLASS_H
    #define MYCLASS_H

    #include <iostream>
    #include <cstring>
    using namespace std;

    class MyClass  {

        private:
            string name;
            int value;
        public:
            //constructor
            MyClass(string, int);
            //setters
            void SetAll(string, int);
            void SetName(string);
            void SetValue(int);
            //getters
            string getName() const;
            int getValue() const;
            void print() const;

    };
#endif