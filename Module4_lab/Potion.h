#pragma once
#ifndef POTION_H
#define POTION_H

#include "Item.h"

class Potion : public Item {
private:
    int healing;

public:
    Potion(const string& name, int healing);
    void use() override;
};

#endif
