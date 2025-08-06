#include "Potion.h"
#include <iostream>
using namespace std;

Potion::Potion(const string& name, int healing)
    : Item(name), healing(healing) {
}

void Potion::use() {
    cout << "Potion " << name << " heals " << healing << " HP!" << endl;
}
