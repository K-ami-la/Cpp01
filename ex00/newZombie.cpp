#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    //alloue de la memoire pour un element qui a la structure de la classe Zombie et appelle le constructeur
    //en lui passane l'argument

    return(zombie);
}

//new = operateur qui alloue dynamiquement de la memoire
//new renvoit un pointeur vers cet objet cree

//#include "Zombie.hpp"
//sur le heap




// Zombie* newZombie(std::string name) {
//     return new Zombie(name);
// }
 
