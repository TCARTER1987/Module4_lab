#pragma once
#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item {
protected:
    string name;

public:
    Item(const string& name);
    virtual void use() = 0; // pure virtual function
    virtual ~Item() = default;
};

#endif
