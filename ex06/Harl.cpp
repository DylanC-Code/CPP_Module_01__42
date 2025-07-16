/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:17:21 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/16 15:03:17 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

typedef void (Harl::*HarlFunc)();

void Harl::debug(void)
{
    std::cout << std::endl
              << "\033[0;35m[ DEBUG ]\033[0m" << std::endl
              << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger" << std::endl;
    std::cout << "I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << std::endl
              << "[ INFO ]" << std::endl
              << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << std::endl
              << "\033[0;33m[ WARNING ]\033[0m" << std::endl
              << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << std::endl
              << "\033[0;31m[ ERROR ]\033[0m" << std::endl
              << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl() {};

Harl::~Harl() {};

void Harl::complain(std::string level)
{
    std::string levels[] = {
        "INFO",
        "DEBUG",
        "WARNING",
        "ERROR",
    };
    HarlFunc harlFuncs[] = {&Harl::info, &Harl::debug, &Harl::warning, &Harl::error};
    int func_index = -1;

    for (size_t i = 0; i < 4; i++)
        if (levels[i] == level)
            func_index = i;

    switch (func_index)
    {
    case 0:
        (this->*harlFuncs[0])();
        (this->*harlFuncs[1])();
        (this->*harlFuncs[2])();
        (this->*harlFuncs[3])();
        break;
    case 1:
        (this->*harlFuncs[1])();
        (this->*harlFuncs[2])();
        (this->*harlFuncs[3])();
        break;
    case 2:
        (this->*harlFuncs[2])();
        (this->*harlFuncs[3])();
        break;
    case 3:
        (this->*harlFuncs[3])();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}
