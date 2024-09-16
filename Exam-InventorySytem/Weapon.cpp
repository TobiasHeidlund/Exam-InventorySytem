#include "Weapon.h"
Weapon::Weapon(std::string name, int weight, int damage, double range){
    setName(name);
    setWeight(weight);
    this->damage=damage;
    this->range=range;
}
Weapon::Weapon() {
    cout << "Vad heter vapnet: ";
    string name;
    cin >> name;
    setName(name);

    cout << "Vad väger vapnet: ";
    int weight;
    cin >> weight;
    setWeight(weight);
    
    cout << "Hur mycket skada gör vapnet: ";
    int damage;
    cin >> damage;
    this->damage = damage;

    cout << "Hur långt avstånd kan man använda vapnet på: ";
    int range;
    cin >> range;
    this->range = range;
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