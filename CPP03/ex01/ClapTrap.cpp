/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:49:15 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/12 12:54:05 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


// コンストラクタ
ClapTrap::ClapTrap(void) : _name("defalut"), _hit_point(10), _energy_point(10), _Attack_damage(0)
{
    std::cout << "ClapTrap : Constructor called" << std::endl;
    std::cout << "           " << _name << "が現れた。" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_point(10), _energy_point(10), _Attack_damage(0)
{
    std::cout << "ClapTrap : Constructor called" << std::endl;
    std::cout << "           " << _name << "が現れた。" << std::endl;
    return ;
}

// デストラクタ
ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap : Destructor called" << std::endl;
    return ;
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << "ClapTrap : Copy Constructor called" << std::endl;
    return ;
}

// copy assignment operator overload
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_Attack_damage = other._Attack_damage;
        this->_hit_point = other._hit_point;
        this->_energy_point = other._energy_point;
    }
    return *this;
};

// メンバ関数の定義
void    ClapTrap::attack(std::string const & target)
{
    if (_energy_point <= 0)
    {
        std::cout << "ClapTrap :" << _name << "はエネルギー切れのようだ、、、" << std::endl;
        return ;
    }
    std::cout << "ClapTrap :" << _name << "のナイトメア!! " << target << "に" << _Attack_damage << "のダメージを与えた！！" << std::endl;
    _energy_point -= 1;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_point <= amount)
    {
        std::cout << "ClapTrap :" << _name << "はたおれた、、、。" << std::endl;
        return ;
    }
    _hit_point -= amount;
    std::cout << "ClapTrap :" << _name << "は、" << amount << "のダメージを受けた！！" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_point <= 0)
    {
        std::cout << "ClapTrap :" << _name << "はエネルギー切れのようだ、、、" << std::endl;
        return ;
    }
    if (_hit_point >= 10)
    {
        std::cout << "ClapTrap :" << _name << "は元気いっぱいだ。回復はいらないようだ。" << std::endl;
        return ;
    }
    _hit_point += amount;
    std::cout << "ClapTrap :" << _name << "は超回復を使った" << amount << "HPが回復した。"  << std::endl;
    _energy_point -= 1;
}