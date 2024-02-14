/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:26:37 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/14 15:24:25 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    this->_name = "Diamond_default";
    this->ClapTrap::_name = std::string("Diamond_default").append("_clap_name");
    this->_hit_point = FragTrap::_hit_point;
    this->_energy_point = ScavTrap::_energy_point;
    this->_Attack_damage = FragTrap::_hit_point;

    std::cout << "DiamondTrap : Constructor called" << std::endl;
    std::cout << "           " << this->_name << "が現れた。" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->_name = name;
    this->ClapTrap::_name = name.append("_clap_name");
    this->_hit_point = FragTrap::_hit_point;
    this->_energy_point = ScavTrap::_energy_point;
    this->_Attack_damage = FragTrap::_hit_point;

    std::cout << "DiamondTrap : Constructor called" << std::endl;
    std::cout << "           " << this->_name << "が現れた。" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap : Destructor called" << std::endl;
    std::cout << "           " << this->_name << "は逃げた、、、" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    *this = other;
    std::cout << "DiamondTrap : Copy Constructor called" << std::endl;
    return ;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_Attack_damage = other._Attack_damage;
        this->_hit_point = other._hit_point;
        this->_energy_point = other._energy_point;
    }
    return *this;
};

void DiamondTrap::attack(const std::string& target)
{
    this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << this->_name << "は自分が誰だか知りたがっている" << std::endl;
    std::cout << this->_name << "、おまえは、" << this->ClapTrap::_name << "だ。しっかりしろ。"  << std::endl;
    return ;
}