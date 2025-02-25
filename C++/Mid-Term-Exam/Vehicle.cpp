#include "Vehicle.h"

Vehicle::Vehicle(string id, int speed, int attack, int defense, int range) {
    this->id = id;
    this->speed = speed;
    this->attack = attack;
    this->defense = defense;
    this->range = range;
}

void Vehicle::setId(string newId) {
    this->id = newId;
}

void Vehicle::setSpeed(int newSpeed) {
    this->speed = newSpeed;
}

void Vehicle::setAttack(int newAttack) {
    this->attack = newAttack;
}

void Vehicle::setDefense(int newDefense) {
    this->defense = newDefense;
}

void Vehicle::setRange(int newRange) {
    this->range = newRange;
}

string Vehicle::getId() const {
    return this->id;
}

int Vehicle::getSpeed() const {
    return this->speed;
}

int Vehicle::getAttack() const {
    return this->attack;
}

int Vehicle::getDefense() const {
    return this->defense;
}

int Vehicle::getRange() const {
    return this->range;
}

void Vehicle::print() {
    cout << "ID: " << this->id << endl;
    cout << "Speed: " << this->speed << endl;
    cout << "Attack: " << this->attack << endl;
    cout << "Defense: " << this->defense << endl;
    cout << "Range: " << this->range << endl;
}

Vehicle::~Vehicle() {
    //normal destructor behaviour
}