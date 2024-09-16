//
// Created by OlegMakeienko on 2024-09-16.
//

#include "Armor.h"
using namespace std;

Armor::Armor(const string& name, int weight, int defense)
    : Item(name, weight), defense(defense) {}

void Armor::use() {
    cout << "Equipping " << name << ", providing " << defense
              << " defense points." << endl;
}

Armor::~Armor() {
    cout << "Destroying Armor: " << name << "." << endl;
}
