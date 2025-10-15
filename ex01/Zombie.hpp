#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{

private:
    std::string name;

public:
    Zombie(); // si on connait pas le nom, constructeur par defaut
    Zombie(std::string name); //si on connait le nom,
    ~Zombie();

    void announce(void) const;
    void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);
 
#endif