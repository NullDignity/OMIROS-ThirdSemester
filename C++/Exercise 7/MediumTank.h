#ifndef MEDIUMTANK_H
    #define MEDIUMTANK_H

    #include "Vehicle.h"
    class HeavyTank;

    class MediumTank : public Vehicle {

        friend void resolveBattle(MediumTank &, HeavyTank &);

        private:
            int health;
            bool operational;
            static int count;
        
        public:
            MediumTank(string = "Medium Tank", int = 75, int = 150, int = 125, int = 1500, bool = true);
            ~MediumTank();
            static int getCount();
            void setHealth(int);
            void setOperational(bool);
            int getHealth() const;
            string getOperational() const;
            void print() const;
    };
#endif