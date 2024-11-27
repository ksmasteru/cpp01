#include "Harl.hpp"
#include <iostream>

void Harl::debug()
{
     std::cout << "I love having extra bacon" 
<< " for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
     std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
     std::cout << " This is unacceptable! I want to speak to the manager now" << std::endl;
}

void    Harl::complain(std::string level)
{
     // poiter to fucntion 
    void   (Harl::*ptrsToFunc[]) (void);
    Harl::*ptrsToFunc[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string complaints [] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0 ; i < 4 ; i++)
    {
         if (complaints[i].compare(level) == 0)
         {
           (this.*ptrsToFunc[i])(); 
         }
    }
}