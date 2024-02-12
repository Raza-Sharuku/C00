/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:06:26 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/12 12:56:17 by razasharuku      ###   ########.fr       */
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