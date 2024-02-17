/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 09:45:57 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/16 11:02:17 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


// Orthodox Canonical Form
Animal::Animal(void)
{
    std::cout << "Animal :Constructor called." << std::endl;
    this->m_type = "animal";
    return ;
}

Animal::~Animal(void)
{
    std::cout << "Animal :Destructor called." << std::endl;
    return ;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal :Copy Constructor called." << std::endl;
    *this = other;
    
    return ;
}

Animal &Animal::operator=(const Animal& other)
{
    std::cout << "Animal :Copy assignment operator called" << std::endl;
    if (this != &other)
        this->m_type = other.m_type;
    return *this;
}
// Orthodox Canonical Form

void Animal::makeSound(void) const
{
    std::cout << "Animal : Garrrruuuu .... (sound from Jungle)" << std::endl;
    return ;
}

std::string Animal::getType(void) const
{
    return (this->m_type);
}
