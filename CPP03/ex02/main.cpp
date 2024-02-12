/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:23:27 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/12 13:25:18 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"FragTrap.hpp"

int main(void) 
{
    ClapTrap pikachu("ピカチュウ");
    FragTrap darkry("ダークライ");

    std::cout << "------------------------------------------------------" << std::endl;

    pikachu.attack("ダークライ");
    darkry.takeDamage(0);
    darkry.attack("ピカチュウ");
    pikachu.takeDamage(20);
    pikachu.beRepaired(2);
    darkry.attack("ピカチュウ");
    pikachu.takeDamage(20);

    std::cout << "------------------------------------------------------" << std::endl;
    pikachu.attack("ダークライ");
    darkry.highFivesGuys();
    darkry.takeDamage(0);
    std::cout << "------------------------------------------------------" << std::endl;
    pikachu.attack("ダークライ");
    darkry.takeDamage(0);
    darkry.attack("ピカチュウ");
    pikachu.takeDamage(20);
    std::cout << "------------------------------------------------------" << std::endl;


    return 0;
}