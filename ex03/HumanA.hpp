#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <Weapon.hpp>
#include <iostream>

class HumanA
{

private:

    Weapon weapon;  //is it a referense
    std::string name;


public:

    HumanA(); //absent in the previous
    HumanA(std::string name); //+ contains Weapon &weapons, a reference to weapon?
    ~HumanA();

    (void)attack();
}

#endif