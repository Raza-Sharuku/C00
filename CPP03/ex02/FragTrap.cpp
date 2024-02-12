/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:14:04 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/12 13:29:27 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    this->_name = "Frag_defalut";
    this->_hit_point = 100;
    this->_energy_point = 50;
    this->_Attack_damage = 20;

    std::cout << "FragTrap : Constructor called" << std::endl;
    std::cout << "           " << this->_name << "が現れた。" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hit_point = 100;
    this->_energy_point = 50;
    this->_Attack_damage = 20;

    std::cout << "FragTrap : Constructor called" << std::endl;
    std::cout << "           " << this->_name << "が現れた。" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap : Destructor called" << std::endl;
    std::cout << "           " << this->_name << "は逃げた、、、" << std::endl;
}

// copy constructor
FragTrap::FragTrap(const FragTrap &other)
{
    *this = other;
    std::cout << "FragTrap : Copy Constructor called" << std::endl;
    return ;
}

// copy assignment operator overload
FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_Attack_damage = other._Attack_damage;
        this->_hit_point = other._hit_point;
        this->_energy_point = other._energy_point;
    }
    return *this;
};

void FragTrap::highFivesGuys(void)
{
    if (this->_hit_point >= 0)
        std::cout << "FragTrap :" << this->_name << "は、ハイタッチしてくれた。効果はいまひとつのようだ" << std::endl;
    else 
        std::cout << "FragTrap :" << this->_name << "は、ハイタッチができる元気がない。" << std::endl;
}