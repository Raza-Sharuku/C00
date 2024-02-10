/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:23:27 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/10 15:29:41 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"


int main(void) 
{
    ClapTrap pikachu("ピカチュウ");
    ClapTrap darkry("ダークライ");

    std::cout << "------------------------------------------------------" << std::endl;

    pikachu.attack("ダークライ");
    darkry.attack("ピカチュウ");
    pikachu.beRepaired(2);
    darkry.attack("ピカチュウ");

    std::cout << "------------------------------------------------------" << std::endl;
    pikachu.attack("ダークライ");
    darkry.attack("ピカチュウ");
    std::cout << "------------------------------------------------------" << std::endl;


    return 0;
}