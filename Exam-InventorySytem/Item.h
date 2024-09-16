#pragma once
#include <iostream>
using namespace std;

class Item
{
	protected:
		string name;
		int weight;
	public:
		Item(const string& name, int weight);
		virtual void use() = 0;
		virtual ~Item();
		string getName();
		int getWeight();
		void setName(string& n);
		void setWeight(int w);

};

