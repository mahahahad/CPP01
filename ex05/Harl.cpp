#include "Harl.hpp"

void    Harl::debug(void) {
    cout << "I love having extra M E A T for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void    Harl::info(void) {
    cout << "I cannot believe adding extra M E A T costs more money. You didn’t put enough M E A T in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void    Harl::warning(void) {
    cout << "I think I deserve to have some extra M E A T for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void    Harl::error(void) {
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void    Harl::complain(std::string level) {
    struct LogFunction
    {
        std::string	level;
        void    (Harl::*fn)();
    };

    LogFunction logFunctions[] = {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error},
        {"", NULL}
    };
    int         i = 0;

    while (logFunctions[i].fn != NULL) {
        if (level == logFunctions[i].level) {
            (this->*logFunctions[i].fn)();
            return ;
        }
        i++;
    }
    cout << "Incorrect log level specified." << endl;
}
