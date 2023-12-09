/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:40:34 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/09 21:08:50 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::_debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup\
burger. I really do!" << std::endl;
}

void Harl::_info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put\
enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for\
years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int i = 0;

    std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*levelptr[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

    while (i < 4)
    {
        if (level == options[i])
        {
            (this->*levelptr[i])();
            return ;
        }
        i++;
    }
    std::cout << "couldn't found it!!" << std::endl;
    return ;
}