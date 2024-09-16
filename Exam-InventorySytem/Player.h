#pragma once
#include <iostream>
#include "Item.h"
#include <vector>

class Player
{
private:
	std::vector<Item*> inventory;
public:
	void addItem(Item* item);
	void displayInventory() const;
	void useItem(int index);
	void removeItem(int index);
};

