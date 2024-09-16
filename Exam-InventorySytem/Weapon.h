#pragma
#include "Item.h"

class Weapon: public Item{
    private: 
        int damage;
        double range;


    public:
    Weapon(std::string name, int weight, int damage, double range);
    void use( ) override;
    int getDamage();
    void setDamage(int defense);
    double getRange();
    void setRange(double range);
};