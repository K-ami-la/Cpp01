#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type(type) {}

Weapon::~Weapon(){}

    
const std::string& Weapon::getType()
{

    return type;
}

void Weapon::setType(const std::string& newType) //obligé vu que getType renvoit const
{
    type = newType;
}
