#include "Potion.h"

Potion::Potion(std::string name, int weight, int hA) : healingAmount(hA){
	setName(name);
	setWeight(weight);
}

void Potion::use() 
{
	std::cout << "drinking " << Potion::name << " for " << Potion::healingAmount;
}
