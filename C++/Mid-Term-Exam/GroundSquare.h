#ifndef GROUNDSQUARE_H
    #define GROUNDSQUARE_H

    #include <iostream>
    using namespace std;

    class GroundSquare {

        private:
            string type;
            int xCoord, yCoord;

        public:
            //constructor
            GroundSquare();
            //setters
            void setType(string newType);
            void setXCoord(int newXCoord);
            void setYCoord(int newYCoord);
            //getters
            string getType() const;
            int getXCoord() const;
            int getYCoord() const;
            //function
            void print();
            //destructor
            ~GroundSquare();

    };
#endif