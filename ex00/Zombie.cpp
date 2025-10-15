#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
    return ; 
}

Zombie:: ~Zombie()
{
    std::cout << name << " is destroyed now" << std::endl;

}

void Zombie::announce(void)const
{   
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}




