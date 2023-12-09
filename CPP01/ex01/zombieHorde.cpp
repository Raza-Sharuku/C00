/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:35:50 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/05 20:45:24 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie  *zombie_army;
    int     i;

    i = 0;
    zombie_army = new Zombie[N];
    while (i < N)
    {
        zombie_army[i] = Zombie(name);
        i++;
    }
    return (zombie_army);
}