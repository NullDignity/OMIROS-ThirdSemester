#include <iostream>
using namespace std;

#include "HeavyTank.h"

int HeavyTank::count=0;

int HeavyTank::getCount() {
    return count;
}

HeavyTank::HeavyTank(string id, int speed, int attack, int defense, int health, bool operational) : Vehicle(id, speed, attack, defense) {
    setHealth(health);
    setOperational(operational);
    count++;
    cout << "CONSTRUCTING HeavyTank";
    Vehicle::print();
    cout << " " << getHealth() << " " << getOperational() << endl;
}

HeavyTank::~HeavyTank() {
    cout << "DESTROYING HeavyTank";
    Vehicle::print();
    cout << " " << getHealth() << getOperational() << endl;
    count--;
}

void HeavyTank::setHealth(int health) {
    this->health = health;
}

int HeavyTank::getHealth() const {
    return this->health;
}

void HeavyTank::setOperational(bool operational) {
    this->operational = operational;
}

string HeavyTank::getOperational() const {
    return (operational == true ? "true" : "false");
}

void HeavyTank::print() const {
    Vehicle::print();
    cout << " " << getHealth() << " " << getOperational() << endl;
}
