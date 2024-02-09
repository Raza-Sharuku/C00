/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:49:15 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/09 17:23:11 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


// コンストラクタ
ClapTrap::ClapTrap(std::string name) : _name(name), _hit_point(10), _Attack_damage(0), _energy_point(10)
{
    std::cout << "Claptrap : " << _name << "が現れた。" << std::endl;
    return ;
}

// デストラクタ
ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap : Destructor called" << std::endl;
    return ;
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) : 
{
    *this = other;
    std::cout << "ClapTrap : Copy Constructor called" << std::endl;
    return ;
}

// copy assignment operator overload
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_Attack_damage = other._Attack_damage;
        this->_hit_point = other._hit_point;
        this->_energy_point = other._energy_point;
    }
    return *this;
};
