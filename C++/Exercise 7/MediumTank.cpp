#include <iostream>
using namespace std;

#include "MediumTank.h"

int MediumTank::count=0;

int MediumTank::getCount() {
    return count;
}

MediumTank::MediumTank(string id, int speed, int attack, int defense, int health, bool operational) : Vehicle(id, speed, attack, defense) {
    setHealth(health);
    setOperational(operational);
    count++;
    cout << "CONSTRUCTING MediumTank";
    Vehicle::print();
    cout << " " << getHealth() << " " << getOperational() << endl;
}

MediumTank::~MediumTank() {
    cout << "DESTROYING MediumTank";
    Vehicle::print();
    cout << " " << getHealth() << getOperational() << endl;
    count--;
}

void MediumTank::setHealth(int health) {
    this->health = health;
}

int MediumTank::getHealth() const {
    return this->health;
}

void MediumTank::setOperational(bool operational) {
    this->operational = operational;
}

string MediumTank::getOperational() const {
    return (operational == true ? "true" : "false");
}

void MediumTank::print() const {
    Vehicle::print();
    cout << " " << getHealth() << " " << getOperational() << endl;
}
