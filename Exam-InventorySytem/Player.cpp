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
	Player::inventory.at(index)->use();
}

void Player::removeItem(int index)
{
	Item* i = Player::inventory.at(index);
	delete(i);
	Player::inventory.erase(Player::inventory.begin() + index);
}
Player::~Player() {
	for (Item* i : Player::inventory) {
		delete(i);
	}

}