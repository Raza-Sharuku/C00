/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:35:50 by razasharuku       #+#    #+#             */
/*   Updated: 2024/01/27 16:06:50 by sraza            ###   ########.fr       */
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
        zombie_army[i].setname(name);
        i++;
    }
    return (zombie_army);
}