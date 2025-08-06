#include "Weapon.h"
#include <iostream>
using namespace std;

Weapon::Weapon(const string& name, int damage)
    : Item(name), damage(damage) {
}

void Weapon::use() {
    cout << "Weapon " << name << " deals " << damage << " damage!" << endl;
}
