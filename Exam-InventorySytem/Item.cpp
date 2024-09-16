#include "Item.h"

Item::~Item()
{
}
Item::Item(){}
Item::Item(const string& name, int weight){
	this->name = name;
	this->weight = weight;
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
