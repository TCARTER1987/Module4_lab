#pragma once
#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Item.h"
using namespace std;

class Inventory {
private:
    vector<Item*> items;

public:
    void addItem(Item* item);
    void listItems();
};

#endif
