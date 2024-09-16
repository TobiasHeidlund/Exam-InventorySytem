#pragma once
#include <iostream>
class Item
{
	protected:
		std::string name;
		int weight;
	public:
		virtual void use() = 0;
		virtual ~Item();
		std::string getName();
		int getWeight();
		void setName(std::string& n);
		void setWeight(int w);

};

