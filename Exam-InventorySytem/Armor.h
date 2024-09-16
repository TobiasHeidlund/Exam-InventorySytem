
#pragma
#include <Item.h>

class Armor : public Item
{
private:
        int defense;
public:
        Armor(std::string name, int weight, int defense);
        void use() override;
        int getDefense() const;
        void setDefense(int defense);
};