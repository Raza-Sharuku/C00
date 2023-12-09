/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:31:52 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/09 21:13:54 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	Harl check;

	std::cout << "\n DEBUG Level " << std::endl;
	check.complain("DEBUG");
	std::cout << "\n INFO Level " << std::endl;;
	check.complain("INFO");
	std::cout << "\n WARNING Level " << std::endl;
	check.complain("WARNING");
	std::cout << "\n ERROR Level " << std::endl;
	check.complain("ERROR");
	std::cout << "\n Not In Option" << std::endl;
	check.complain("asrtyukgfds");
	return (0);
}


__attribute__((destructor))
static void destructor() 
{
    system("leaks -q ex05");
}