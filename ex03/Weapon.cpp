#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type(type) {}

Weapon::~Weapon(){}

    
const std::string& Weapon::getType() //reonvoie const pourqu il ne puisse pas modifier la chaine
{

    return type;
}

void Weapon::setType(const std::string& newType) //obligé vu que getType renvoie const
{
    type = newType;
}
