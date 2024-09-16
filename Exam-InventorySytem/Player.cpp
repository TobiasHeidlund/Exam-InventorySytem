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
	if (index >= 0 && index < inventory.size()) { // at(index) kastar ett undantag om indexet är utanför gränserna.
		//Det kan vara bra att hantera detta undantag eller kontrollera indexet innan åtkomst. (OM)
		inventory.at(index)->use();
	} else {
		std::cerr << "Index out of bounds" << std::endl;
	}
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
	inventory.clear(); //det är viktigt att säkerställa att inventory är tomt efter att alla objekt har raderats (OM)
}