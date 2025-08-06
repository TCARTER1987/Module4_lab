#pragma once
#ifndef ROGUE_H
#define ROGUE_H

#include "Character.h"

class Rogue : public Character {
private:
    int agility;

public:
    Rogue(const string& name, int level, int health, int agility);
    void attack() override;
};

#endif
