/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:57:37 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/05 20:56:57 by razasharuku      ###   ########.fr       */
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