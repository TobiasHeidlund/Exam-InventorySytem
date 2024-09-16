#include "Potion.h"

Potion::Potion(std::string name, int weight, int hA) : healingAmount(hA) {
	setName(name);
	setWeight(weight);
}
Potion::Potion() {
	cout << "Vad heter potion'en: ";
	string name;
	cin >> name;
	setName(name);

	cout << "Vad väger potion'en: ";
	int weight;
	cin >> weight;
	setWeight(weight);

	cout << "hur mycket healar potion'en: ";
	int heal;
	cin >> heal;
	this->healingAmount = heal;
}

void Potion::use()
{
	std::cout << "drinking " << Potion::name << " for " << Potion::healingAmount;
}
