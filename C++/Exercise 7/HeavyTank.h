#ifndef HEAVYTANK_H
    #define HEAVYTANK_H

    #include "Vehicle.h"
    class MediumTank;

    class HeavyTank : public Vehicle {

        friend void resolveBattle(MediumTank &, HeavyTank &);

        private:
            int health;
            bool operational;
            static int count;
        
        public:
            HeavyTank(string = "Heavy Tank", int = 75, int = 150, int = 125, int = 1500, bool = true);
            ~HeavyTank();
            static int getCount();
            void setHealth(int);
            void setOperational(bool);
            int getHealth() const;
            string getOperational() const;
            void print() const;
    };
#endif