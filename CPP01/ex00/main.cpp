/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:53:47 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/05 20:29:25 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
    Zombie *sharuku;
    Zombie raza("raza");

    raza.announce();
    sharuku = newZombie("new sharuku");
    sharuku->announce();
    randomChump("Luffy------");
    delete sharuku;
    return (0);
}