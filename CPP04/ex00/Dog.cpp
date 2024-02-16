/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:50:46 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/16 11:02:51 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


// Orthodox Canonical Form
Dog::Dog(void) : m_type("Dog")
{
    std::cout << "Dog :Constructor called." << std::endl;
    this->m_type = "Dog";
    return ;
}

Dog::~Dog(void)
{
    std::cout << "Dog :Destructor called." << std::endl;
    return ;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog :Copy Constructor called." << std::endl;
    *this = other;
    
    return ;
}

Dog &Dog::operator=(const Dog& other)
{
    std::cout << "Dog :Copy assignment operator called" << std::endl;
    if (this != &other)
        this->m_type = other.m_type;
    return *this;
}
// Orthodox Canonical Form

void Dog::makeSound(void) const
{
    std::cout << "Dog : WaO~~~~~~~~nNNN(Inuarasi)" << std::endl;
    return ;
}

std::string Dog::getType(void) const
{
    return (this->m_type);
}