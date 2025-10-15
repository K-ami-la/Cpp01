#include <Weapon.hpp>

Weapon::Weapon{}

Weapon::Weapon(std::string type) : type(type){};

Weapon::~Weapon(){}

    
Weapon:: std::string const  &getType();
Weapon:: (void) setType(std::string type)
{

    type = type;
}
