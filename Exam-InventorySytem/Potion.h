#pragma once
#include <iostream>
#include "Item.h"

class Potion : public Item{
	public:
		int healingAmount;
		void use() override;
		Potion(std::string name, int weight, int hA);
		Potion();
};
