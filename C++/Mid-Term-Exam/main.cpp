#include "GroundSquare.h"
#include "Vehicle.h"
#include <cstdlib>

GroundSquare movement (GroundSquare start, Vehicle veh) {

    unsigned seed;
    int newXCoord, newYCoord;

    cout << "\nEnter seed: ";
    cin >> seed;
    srand(seed);

    int random = rand() % 4;

    if (random == 0) {
        newXCoord = start.getXCoord();
        newYCoord = veh.getSpeed() + start.getYCoord();
    } else if (random == 1) {
        newXCoord = veh.getSpeed()/2 + start.getXCoord();
        newYCoord = veh.getSpeed()/2 + start.getYCoord();
    } else if (random == 2) {
        newXCoord = veh.getSpeed() + start.getXCoord();
        newYCoord = start.getYCoord();
    } else {
        newXCoord = veh.getSpeed()/2 + start.getXCoord();
        newYCoord = (veh.getSpeed()/2)/-1 + start.getYCoord();
    }

    GroundSquare newMovement;
    newMovement.setXCoord(newXCoord);
    newMovement.setYCoord(newYCoord);

    return newMovement;

};

int main() {

    GroundSquare beginning;
    Vehicle apc("Carrier", 120, 60, 40, 150);

    beginning.print();
    cout << "\n";
    apc.print();

    GroundSquare newMovement = movement(beginning, apc);
    cout << "\n";

    newMovement.print();
    cout << "\n";

    return 0;
}