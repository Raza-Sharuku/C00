/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WorngWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:17:27 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/16 11:20:51 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


// Orthodox Canonical Form
WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal :Constructor called." << std::endl;
    this->m_type = "Wrong_animal";
    return ;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal :Destructor called." << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "WrongAnimal :Copy Constructor called." << std::endl;
    *this = other;
    
    return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal :Copy assignment operator called" << std::endl;
    if (this != &other)
        this->m_type = other.m_type;
    return *this;
}
// Orthodox Canonical Form

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal : Lalalalal LA~~~~~ .... (sound from Jungle)" << std::endl;
    return ;
}

std::string WrongAnimal::getType(void) const
{
    return (this->m_type);
}
