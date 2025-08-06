#pragma once
#ifndef FIGHTER_H
#define FIGHTER_H

#include "Character.h"

class Fighter : public Character {
private:
    int strength;

public:
    Fighter(const string& name, int level, int health, int strength);
    void attack() override;
};

#endif
