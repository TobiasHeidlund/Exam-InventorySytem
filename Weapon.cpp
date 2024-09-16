#include "Weapon.h"

Weapon::Weapon(std::string name, int weight, int damage, double range){
    setName(name);
    setWeight(weight);
    this->damage=damage;
    this->range=range;
}

void Weapon::use(){
    std::cout << " name:\n "<<getName() << "\nDamage: \n " << damage << " \n with a range of \n " <<range <<"meters\n";
}

int Weapon::getDamage(){
    return damage;
}

void Weapon::setDamage(int damage){
    this->damage=damage;
}

double Weapon::getRange(){
    return range;

}
void Weapon::setRange(double range){
    this->range=range;
}