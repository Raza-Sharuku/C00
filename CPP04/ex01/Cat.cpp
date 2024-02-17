/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:48:30 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/17 14:47:00 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"


// Orthodox Canonical Form
Cat::Cat(void)
{
    std::cout << "Cat :Constructor called." << std::endl;
    this->brain = new Brain;
    this->m_type = "Cat";
    return ;
}

Cat::~Cat(void)
{
    delete this->brain;
    std::cout << "Cat :Destructor called." << std::endl;
    return ;
}

Cat::Cat(const Cat &other): Animal(other)
{
    std::cout << "Cat :Copy Constructor called." << std::endl;
    this->brain = new Brain(*(other.brain));
    
    return ;
}

Cat &Cat::operator=(const Cat& other)
{
    std::cout << "Cat :Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->m_type = other.m_type;
        delete this->brain;
        this->brain = new Brain(*(other.brain));
    }
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

std::string Cat::getidea(unsigned int num) const
{
    if (num >= 0 && num < 100)
        return (this->brain->getidea(num));
    else 
        return ("set valid num.");
}

void Cat::setidea(unsigned int num, std::string idea) const
{
    if (num >= 0 && num < 100)
        this->brain->setidea(num, idea);
    else 
        std::cout << "set valid num." << std::endl;
    return ;
}