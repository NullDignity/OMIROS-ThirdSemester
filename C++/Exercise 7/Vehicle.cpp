#include "Vehicle.h"

int Vehicle::count=0;

int Vehicle::getCount() {
    return count;
}

Vehicle::Vehicle(string id, int speed, int attack, int defense) {
    setAll(id, speed, attack, defense);
    count++;
    cout << "CONSTRUCTING Vehicle ";
    cout << endl;
}

Vehicle::~Vehicle() {
    cout << "DESTROYING Vehicle ";
    print();
    cout << endl;
    count--;
}

void Vehicle::setAll(string newId, int newSpeed, int newAttack, int newDefense) {
    setId(newId);
    setSpeed(newSpeed);
    setAttack(newAttack);
    setDefense(newDefense);
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

void Vehicle::print() const {
    cout << "Number " << getCount() << " Object " << getId() << " with values " << getSpeed() << " " << getAttack() << " " << getDefense();
}