/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:17:37 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/16 11:29:31 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


// Orthodox Canonical Form
WrongCat::WrongCat(void)
{
    std::cout << "WrongCat :Constructor called." << std::endl;
    this->m_type = "WrongCat";
    return ;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat :Destructor called." << std::endl;
    return ;
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "WrongCat :Copy Constructor called." << std::endl;
    *this = other;
    
    return ;
}

WrongCat &WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat :Copy assignment operator called" << std::endl;
    if (this != &other)
        this->m_type = other.m_type;
    return *this;
}
// Orthodox Canonical Form

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat : Bark Bark" << std::endl;
    return ;
}

std::string WrongCat::getType(void) const
{
    return (this->m_type);
}