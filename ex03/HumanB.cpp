#include "HumanB.hpp"

HumanB::HumanB();

HumanB::HumanB(std::string name) : name(name){}

HumanB::~HumanB(){}

HumanB::(void)attack()
{
    std::cout << name << " attacks with their " << Weapon << std::endl

}