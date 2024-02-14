/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:23:27 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/14 15:22:48 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"FragTrap.hpp"
#include"ScavTrap.hpp"
#include"DiamondTrap.hpp"



int main(void) 
{
    DiamondTrap *A_1 = new DiamondTrap("ピカチュウ");
    DiamondTrap *A_2 = new DiamondTrap("ダークライ");
    DiamondTrap *A_3 = new DiamondTrap("ライチュウ");
    DiamondTrap Diarga("ディアルガ");

    std::cout << "------------------------------------------------------" << std::endl;

    A_1->attack("ダークライ");
    A_2->takeDamage(0);
    A_2->attack("ピカチュウ");
    A_1->takeDamage(20);
    A_1->beRepaired(2);
    A_2->attack("ピカチュウ");
    A_1->takeDamage(20);

    std::cout << "------------------------------------------------------" << std::endl;

    A_3->attack("ディアルガ");
    Diarga.takeDamage(0);
    Diarga.attack("ライチュウ");
    A_3->takeDamage(20);
    A_3->beRepaired(2);
    Diarga.attack("ライチュウ");
    A_3->takeDamage(20);


    std::cout << "#########################################################" << std::endl;
    A_1->attack("ダークライ");
    // A_2->highFivesGuys();
    A_2->takeDamage(0);

    std::cout << "#########################################################" << std::endl;
    A_3->attack("ディアルガ");
    Diarga.attack("ライチュウ");
    Diarga.takeDamage(0);
    Diarga.attack("ライチュウ");
    Diarga.whoAmI();


    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    A_1->attack("ダークライ");
    A_2->takeDamage(0);
    A_2->attack("ピカチュウ");
    A_1->takeDamage(20);

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    A_3->attack("ディアルガ");
    Diarga.takeDamage(0);
    Diarga.attack("ライチュウ");
    A_3->takeDamage(20);
    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

    delete A_1;
    delete A_2;
    delete A_3;

    return 0;
}















// int main(void) 
// {
//     ClapTrap pikachu("ピカチュウ");
//     FragTrap darkry("ダークライ");
//     ScavTrap raichu("ライチュウ");
//     DiamondTrap Diarga("ディアルガ");

//     std::cout << "------------------------------------------------------" << std::endl;

//     pikachu.attack("ダークライ");
//     darkry.takeDamage(0);
//     darkry.attack("ピカチュウ");
//     pikachu.takeDamage(20);
//     pikachu.beRepaired(2);
//     darkry.attack("ピカチュウ");
//     pikachu.takeDamage(20);

//     std::cout << "------------------------------------------------------" << std::endl;

//     raichu.attack("ディアルガ");
//     Diarga.takeDamage(0);
//     Diarga.attack("ライチュウ");
//     raichu.takeDamage(20);
//     raichu.beRepaired(2);
//     Diarga.attack("ライチュウ");
//     raichu.takeDamage(20);


//     std::cout << "#########################################################" << std::endl;
//     pikachu.attack("ダークライ");
//     darkry.highFivesGuys();
//     darkry.takeDamage(0);

//     std::cout << "#########################################################" << std::endl;
//     raichu.attack("ディアルガ");
//     Diarga.attack("ライチュウ");
//     Diarga.takeDamage(0);
//     Diarga.attack("ライチュウ");
//     Diarga.whoAmI();


//     std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
//     pikachu.attack("ダークライ");
//     darkry.takeDamage(0);
//     darkry.attack("ピカチュウ");
//     pikachu.takeDamage(20);

//     std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
//     raichu.attack("ディアルガ");
//     Diarga.takeDamage(0);
//     Diarga.attack("ライチュウ");
//     raichu.takeDamage(20);
//     std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;


//     return 0;
// }