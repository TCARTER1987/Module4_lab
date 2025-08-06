#include <iostream>
#include "Mage.h"
#include "Fighter.h"
#include "Rogue.h"
#include "Game.h"
#include "Weapon.h"
#include "Potion.h"
#include "Inventory.h"

using namespace std;

int main() {
    // Create characters
    Mage* mage = new Mage("Kifler", 10, 80, 120);
    Fighter* fighter = new Fighter("Barstow", 12, 150, 90);
    Rogue* rogue = new Rogue("Kal'daka", 11, 100, 110);

    // Give inventory to one of them
    Inventory inv;
    inv.addItem(new Weapon("Jade Broadsword", 50));
    inv.addItem(new Potion("Potion of Rejuvenation", 25));

    // Show the inventory
    cout << "\n=== Inventory Demo ===" << endl;
    inv.listItems();

    // Run the game
    Game game;
    game.addCharacter(mage);
    game.addCharacter(fighter);
    game.addCharacter(rogue);

    cout << "\n=== Game Run ===" << endl;
    game.run();

    // Clean up memory
    delete mage;
    delete fighter;
    delete rogue;

    return 0;
}
