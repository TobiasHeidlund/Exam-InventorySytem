#include "Player.h"
#include <iostream>
void Player::addItem(Item* item)
{
	Player::inventory.push_back(item);
}

void Player::displayInventory() const
{
	std::cout << "The inventory contains:\n";
	for (Item* i: Player::inventory)
	{
		std::cout << i->getName() << std::endl;
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