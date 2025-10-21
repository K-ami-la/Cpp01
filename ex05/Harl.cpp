#include "Harl.hpp"
#include <iostream>

void Harl::debug(void) {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"}; //on cree un tableau de chaines
    void (Harl::*functions[])(void) =   //on declare un tableau de pointeurs vers fonctions membres>. pointeur vers une fct membre de type Harl. la fct ne retourne rien et ne retourne pas d arguments
    {
        &Harl::debug, //dans le tableau on met des les adresses des fcts correspondantes 
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (int i = 0; i < 4; i++) //on parcourt les 4 niveaux connus 
    {
        if (levels[i] == level)  //on compare la chaine passee par l utilisteur level1 a la chaine du tableau
        {
            (this->*functions[i])(); // appel dynamique de la fonction membre sur objet. execute reellement la fonction
            return;
        }
    }
    std::cout << "Unknown level: " << level << std::endl;
}
//
// //void Harl::complain(std::string level)
// {
//     if (level == "DEBUG")
//         debug();
//     else if (level == "INFO")
//         info();
//     else if (level == "WARNING")
//         warning();
//     else if (level == "ERROR")
//         error();
//     else
//         std::cout << "Unknown level: " << level << std::endl;
// }//