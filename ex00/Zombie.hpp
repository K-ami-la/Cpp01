
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{

private:

    std::string name; 

public:

    Zombie(std::string name);
    ~ Zombie();

    void announce(void) const; // ne modifie rien. ne ; ne modifie pas les attributs de la classe


};

Zombie  *newZombie(std::string name);

void    randomChump(std::string name);

#endif