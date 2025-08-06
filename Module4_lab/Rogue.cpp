#include "Rogue.h"
#include <iostream>
using namespace std;

Rogue::Rogue(const string& name, int level, int health, int agility)
    : Character(name, level, health), agility(agility) {
}

void Rogue::attack() {
    cout << name << " Attempts to backstab you!" << endl;
}
