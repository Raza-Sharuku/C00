/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:45:09 by razasharuku       #+#    #+#             */
/*   Updated: 2024/01/28 14:19:28 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

static Weapon noWeapon("No weapon");

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::attack(void)
{
    if (this->_weapon == NULL)
    {
        std::cout << "SET THE WEAPON" << std::endl;
        return ;
    }
    else
        std::cout << _name << "  attacks with their " << (*_weapon).getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}