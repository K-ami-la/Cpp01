#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club"); //"texte" >> chaîne littéreale (texte ecrit dans le code > type const char[5])
        HumanA bob("Bob", club); //toujours a une arme
        bob.attack();  //imprime le message
        club.setType("some other type of club"); //le setter change le type
        bob.attack(); //imprime le nouveau message

    }

    {
        std::cout << "\n";
        // Weapon club = Weapon("nuke"); //interdit en c++ : on ne peut pas redefinir "club" ou "bob"
        // HumanA bob ("Bob", club);
        // bob.attack();
        Weapon club = Weapon("nuke"); //"texte" >> chaîne littéreale (texte ecrit dans le code > type const char[5])
        HumanA bob("Bob", club); //toujours a une arme
        bob.attack();  //imprime le message
        club.setType("some other type of club"); //le setter change le type
        bob.attack(); //imprime le nouveau message
    }

    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}
