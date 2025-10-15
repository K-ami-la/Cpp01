#include "HumanA.hpp"

HumanA::HumanA(){}

HumanA::HumanA(std::string name): name(name), Weapon(Weapon){}

HumanA:: ~HumanA(){}


void HumanA::attack()
{

        std::cout << name << "attacks with their " << Weapon << std::endl;
}
