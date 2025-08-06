#pragma once
#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Character.h"
using namespace std;

class Game {
private:
    vector<Character*> characters;

public:
    void addCharacter(Character* c);
    void run();
};

#endif
