#include "Armor.h"

Armor::Armor(std::string name, int weight, int defense){
    setName(name);
    setWeight(weight);
    this->defense=defense;
}


void Armor::use(){
    std::cout <<"Armor: "<<getName()<<" with defense"<<defense<<"/n";
}

int Armor::getDefense() const{
    return defense;
}

void Armor::setDefense(int defense) {
    this->defense = defense;
}