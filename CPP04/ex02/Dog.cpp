/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:50:46 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/17 15:05:59 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

// Orthodox Canonical Form
Dog::Dog(void) : m_type("Dog")
{
    std::cout << "Dog :Constructor called." << std::endl;
    this->brain = new Brain;
    this->m_type = "Dog";
    return ;
}

Dog::~Dog(void)
{
    delete this->brain;
    std::cout << "Dog :Destructor called." << std::endl;
    return ;
}

Dog::Dog(const Dog &other): Animal(other)
{
    std::cout << "Dog :Copy Constructor called." << std::endl;
    this->brain = new Brain(*(other.brain));
    return ;
}

Dog &Dog::operator=(const Dog& other)
{
    std::cout << "Dog :Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->m_type = other.m_type;
        delete this->brain;
        this->brain = new Brain(*(other.brain));
    }
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

std::string Dog::getidea(unsigned int num) const
{
    if (num >= 0 && num < 100)
        return (this->brain->getidea(num));
    else 
        return ("set valid num.");
}

void Dog::setidea(unsigned int num, std::string idea) const
{
    if (num >= 0 && num < 100)
        this->brain->setidea(num, idea);
    else 
        std::cout << "set valid num." << std::endl;
    return ;
}