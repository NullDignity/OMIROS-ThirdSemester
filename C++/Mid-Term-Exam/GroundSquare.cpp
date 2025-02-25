#include "GroundSquare.h"

GroundSquare::GroundSquare() {
    this->type = "Plain";
    this->xCoord = 0;
    this->yCoord = 0;
}

void GroundSquare::setType(string newType) {
    this->type = newType;
}

void GroundSquare::setXCoord(int newXCoord) {
    this->xCoord = newXCoord;
}

void GroundSquare::setYCoord(int newYCoord) {
    this->yCoord = newYCoord;
}

string GroundSquare::getType() const {
    return this->type;
}

int GroundSquare::getXCoord() const {
    return this->xCoord;
}

int GroundSquare::getYCoord() const {
    return this->yCoord;
}

void GroundSquare::print() {
    cout << "Type: " << this->type << endl;
    cout << "X Coordinate: " << this->xCoord << endl;
    cout << "Y Coordinate: " << this->yCoord << endl;
}

GroundSquare::~GroundSquare() {
    //normal destructor behaviour
}