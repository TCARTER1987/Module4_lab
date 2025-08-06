#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using namespace std;

class Character {
protected:
    string name;
    int level;
    int health;

public:
    Character(const string& name, int level, int health);
    virtual void attack() = 0; 
    virtual ~Character() = default;
};

#endif
