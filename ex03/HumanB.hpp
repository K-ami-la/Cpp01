#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{

    private:

        Weapon weapon; //it's a pointer in the previous one : Weapon *weapon;
        std::string name;

    public:

        HumanB(); //absent in the previous one 
        HumanB(std::string name);
        ~HumanB();

        (void)attack();
        //void setWeapon(Weapon &weapon);

};

#endif 