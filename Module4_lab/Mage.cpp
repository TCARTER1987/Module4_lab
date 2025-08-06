#include "Mage.h"
#include <iostream>
using namespace std;

Mage::Mage(const string& name, int level, int health, int mana)
    : Character(name, level, health), mana(mana) {
}

void Mage::attack() {
    cout << name << " Casts Chain-lightning!" << endl;
}
