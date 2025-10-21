

#include "Harl.hpp"

int main() 
{
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("SILLY"); // Test niveau inconnu

    return 0;
}

//Tu dois créer une classe Harl qui “se plaint” selon différents niveaux (DEBUG, INFO, WARNING, ERROR).
//Chaque niveau correspond à une fonction privée qui affiche un message spécifique

//creer une classe qui contient des fonctions privees
//creer une fct publique qui appelle automatiquement la fonction correspondant au niveau demande
//utilise des pointeurs vers fonctions membres pour faire appel (interdit d utiliser plein de if et switch)
//chaque fonction affiche un message precis

//pointeurs vers fonctions membres//eviction de if/else >>> 
