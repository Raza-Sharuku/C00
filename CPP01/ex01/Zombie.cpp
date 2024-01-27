/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:57:37 by razasharuku       #+#    #+#             */
/*   Updated: 2024/01/27 16:06:26 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "constructor" << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Zombie '" << this->_name <<"' is created!!" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie '" << this->_name <<"' is dead!!" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string name)
{
    this->_name = name;
    return ;
}