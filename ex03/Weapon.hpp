#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type; // ne doit pas etre const parce que doit etre change plus tard (setType )

public:
    Weapon(const std::string& type); // objet const peut appeler uniquement les fonctions const
    ~Weapon();

    const std::string& getType(); //renvoie une referrence constante (dans le sujet)
    void setType(const std::string& newType); //prend une reference constante
};

#endif 