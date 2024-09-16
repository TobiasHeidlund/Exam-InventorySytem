#ifndef ARMOR_H
#define ARMOR_H

#include <iostream>
#include "Item.h"

class Armor : public Item {
private:
    int defense;

public:
    Armor(const std::string& name, int weight, int defense);

    void use() override;

    ~Armor() override;
};

#endif
