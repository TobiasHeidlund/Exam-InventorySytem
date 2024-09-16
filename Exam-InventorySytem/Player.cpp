#include "Player.h"
#include <iostream>
void Player::addItem(Item* item)
{
	Player::inventory.push_back(item);
}

void Player::displayInventory() const
{
	std::cout << "Förådet innehåller:\n";
	for (int i = 0; i < Player::inventory.size(); i++)
	{
		std::cout <<i<< ": " << Player::inventory.at(i)->getName() << std::endl;
	}
	for (Item* i: Player::inventory)
	{
		
	}
}

void Player::useItem(int index)
{
	if (index > 0 && index < Player::inventory.size()) {
		Player::inventory.at(index)->use();
	}
	else {
		cout << "Platsen används inte" << endl;
	}


	
}

void Player::removeItem(int index)
{
	if (index > 0 && index < Player::inventory.size()) {
		Item* i = Player::inventory.at(index);
		delete(i);
		Player::inventory.erase(Player::inventory.begin() + index);
	}
	else {
		cout << "Platsen används inte" << endl;
	}
}
	
Player::~Player() {
	for (Item* i : Player::inventory) {
		delete(i);
	}

}