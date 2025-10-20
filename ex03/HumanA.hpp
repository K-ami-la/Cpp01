#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon& weapon; // référence : toujours armé

public:
    HumanA(const std::string& name, Weapon& weapon);
    ~HumanA();

    void attack() const;
};

#endif
