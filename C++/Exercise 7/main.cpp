#include <iostream>
using namespace std;

#include "MediumTank.h"
#include "HeavyTank.h"

void resolveBattle(MediumTank &v1, HeavyTank &v2) {

    if (v1.getAttack() > v2.getDefense())
        v2.setHealth(v2.getHealth() - (v1.getAttack() - v2.getDefense()));
    else
        v2.setHealth(v2.getHealth() - 40);

    if (v2.getAttack() > v1.getDefense())
        v1.setHealth(v1.getHealth() - (v2.getAttack() - v1.getDefense()));
    else
        v1.setHealth(v1.getHealth() - 40);

    if (v1.getHealth() < 500)
        v1.setOperational(false);

    if (v2.getHealth() < 500)
        v2.setOperational(false);

}

int main() {

    MediumTank mT("COACH", 100, 110, 120, 500, true);
    HeavyTank hT("IRA", 50, 150, 170, 750, true);

    resolveBattle(mT, hT);

    mT.print();
    hT.print();

    return 0;
}