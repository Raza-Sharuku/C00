/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:31:52 by razasharuku       #+#    #+#             */
/*   Updated: 2024/01/27 16:15:51 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        // jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();

        Weapon punch = Weapon("Hard punch");
        jim.setWeapon(punch);
        jim.attack();
        punch.setType("Upper Cut");
        jim.attack();
    }
    return 0;
}


__attribute__((destructor))
static void destructor() 
{
    system("leaks -q ex03");
}