#ifndef VEHICLE_H
    #define VEHICLE_H

    #include <iostream>
    using namespace std;

    class Vehicle {

        private:
            string id;
            int speed, attack, defense, range;

        public:
            //constructor
            Vehicle(string, int, int, int, int);
            //setters
            void setId(string);
            void setSpeed(int);
            void setAttack(int);
            void setDefense(int);
            void setRange(int);
            //getters
            string getId() const;
            int getSpeed() const;
            int getAttack() const;
            int getDefense() const;
            int getRange() const;
            //function
            void print();
            //destructor
            ~Vehicle();

    };
#endif