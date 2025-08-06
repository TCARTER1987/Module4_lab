#pragma once
#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

class Weapon : public Item {
private:
    int damage;

public:
    Weapon(const string& name, int damage);
    void use() override;
};

#endif
