#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name): name(name){}

Zombie::~Zombie()
{

    std::cout << name << " was destroyed" << std::endl; 
}

void Zombie::announce(void) const
{
        std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;

}

void Zombie::setName(std::string name)
{
    this->name = name;
    //pointeur vers attribut prive de la classe et non le parametre
    // ou faire
    
    //void Zombie::SetName(std::string n)
    //this->name = n;
}