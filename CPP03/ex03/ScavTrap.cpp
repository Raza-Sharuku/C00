/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:06:26 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/12 13:18:14 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->_name = "scav_defalut";
    this->_hit_point = 100;
    this->_energy_point = 50;
    this->_Attack_damage = 20;

    std::cout << "ScavTrap : Constructor called" << std::endl;
    std::cout << "           " << this->_name << "が現れた。" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hit_point = 100;
    this->_energy_point = 50;
    this->_Attack_damage = 20;

    std::cout << "ScavTrap : Constructor called" << std::endl;
    std::cout << "           " << this->_name << "が現れた。" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap : Destructor called" << std::endl;
    std::cout << "           " << this->_name << "は逃げた、、、" << std::endl;
}

// copy constructor
ScavTrap::ScavTrap(const ScavTrap &other)
{
    *this = other;
    std::cout << "ScavTrap : Copy Constructor called" << std::endl;
    return ;
}

// copy assignment operator overload
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_Attack_damage = other._Attack_damage;
        this->_hit_point = other._hit_point;
        this->_energy_point = other._energy_point;
    }
    return *this;
};

void ScavTrap::attack(const std::string& target)
{
    if (_energy_point <= 0)
    {
        std::cout << "ScavTrap :" << this->_name << "はエネルギー切れのようだ、、、" << std::endl;
        return ;
    }
    std::cout << "ScavTrap :" << this->_name << "のナイトメア!! " << target << "に" << _Attack_damage << "のダメージを与えた！！" << std::endl;
    _energy_point -= 1;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap :" << this->_name << "は、まもるを使った。相手の攻撃はきまらなかったようだ。" << std::endl;
}