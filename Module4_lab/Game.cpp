#include "Game.h"
#include <iostream>
using namespace std;

void Game::addCharacter(Character* c) {
    characters.push_back(c);
}

void Game::run() {
    cout << "Starting game simulation..." << endl;
    for (Character* c : characters) {
        c->attack();
    }
}
