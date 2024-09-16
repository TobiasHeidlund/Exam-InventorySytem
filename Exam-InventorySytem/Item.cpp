#include "Item.h"

Item::~Item()
{
}

std::string Item::getName()
{
	return Item::name;
}

int Item::getWeight()
{
	return Item::weight;
}

void Item::setName(std::string& n)
{
	Item::name = n;
}

void Item::setWeight(int w)
{
	Item::weight = w;
}
