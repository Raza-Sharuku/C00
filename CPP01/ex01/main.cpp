/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:31:52 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/05 21:13:30 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
    Zombie  *sharuku;
    int     N = 5;
    int     i = 0;

    sharuku = zombieHorde(N, "sharuku");
    while (i < N)
    {
        std::cout << "Zombie number :" << i << "  ";
        sharuku[i].announce();
        i++;
    }
    delete[] sharuku;
    return (0);
}