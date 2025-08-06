#include "Inventory.h"
#include <iostream>
using namespace std;

void Inventory::addItem(Item* item) {
    items.push_back(item);
}

void Inventory::listItems() {
    cout << "Inventory contains:" << endl;
    for (Item* item : items) {
        item->use();
    }
}
