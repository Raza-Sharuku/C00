/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:48:30 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/16 11:13:30 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


// Orthodox Canonical Form
Cat::Cat(void)
{
    std::cout << "Cat :Constructor called." << std::endl;
    this->m_type = "Cat";
    return ;
}

Cat::~Cat(void)
{
    std::cout << "Cat :Destructor called." << std::endl;
    return ;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat :Copy Constructor called." << std::endl;
    *this = other;
    
    return ;
}

Cat &Cat::operator=(const Cat& other)
{
    std::cout << "Cat :Copy assignment operator called" << std::endl;
    if (this != &other)
        this->m_type = other.m_type;
    return *this;
}
// Orthodox Canonical Form

void Cat::makeSound(void) const
{
    std::cout << "Cat : Goronya--------go(Nekomamushi)" << std::endl;
    return ;
}

std::string Cat::getType(void) const
{
    return (this->m_type);
}