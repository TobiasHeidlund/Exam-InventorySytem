#include "Armor.h"

Armor::Armor(std::string name, int weight, int defense){
    setName(name);
    setWeight(weight);
    this->defense=defense;
}
Armor::Armor() {
	cout << "Vad heter Armoren: ";
	string name;
	cin >> name;
	setName(name);

	cout << "Vad väger Armoren: ";
	int weight;
	cin >> weight;
	setWeight(weight);

	cout << "Hur hur stark är Armoren: ";
	int defense;
	cin >> defense;
	this->defense = defense;
}

void Armor::use(){
    std::cout <<"Armor: "<<getName()<<" with defense"<<defense<<"\n";
}

int Armor::getDefense() const{
    return defense;
}

void Armor::setDefense(int defense) {
    this->defense = defense;
}