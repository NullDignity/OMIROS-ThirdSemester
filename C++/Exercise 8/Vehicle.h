#ifndef VEHICLE_H
    #define VEHICLE_H

    #include <iostream>
    using namespace std;

    class Vehicle {

        private:
            string id;
            int speed, attack, defense;
            static int count;

        public:
            //constructor
            Vehicle(string = "A", int = 50, int = 40, int = 30);
            // destructor
            ~Vehicle();
            //setters
            void setAll(string, int, int, int);
            void setId(string);
            void setSpeed(int);
            void setAttack(int);
            void setDefense(int);
            //getters
            static int getCount();
            string getId() const;
            int getSpeed() const;
            int getAttack() const;
            int getDefense() const;
            //function
            void print() const;

    };
#endif