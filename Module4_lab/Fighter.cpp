#include "Fighter.h"
#include <iostream>
using namespace std;

Fighter::Fighter(const string& name, int level, int health, int strength)
    : Character(name, level, health), strength(strength) {
}

void Fighter::attack() {
    cout << name << " ability " << endl;
}
