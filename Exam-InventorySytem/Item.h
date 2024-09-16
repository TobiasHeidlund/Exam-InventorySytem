#pragma once
#include <iostream>
using namespace std;

class Item
{
	protected:
		std::string name;
		int weight;
		Item(const string& name, int weight);
		Item();
	public:
		virtual void use() = 0;
		virtual ~Item();
		string getName();
		int getWeight();
		void setName(string& n);
		void setWeight(int w);

};

