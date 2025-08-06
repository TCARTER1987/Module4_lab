#pragma once
#ifndef MAGE_H
#define MAGE_H

#include "Character.h"

class Mage : public Character {
private:
    int mana;

public:
    Mage(const string& name, int level, int health, int mana);
    void attack() override;
};

#endif
