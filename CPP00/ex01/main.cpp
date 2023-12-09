/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:33:16 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/02 10:46:55 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	Phonebook phonebook;
	std::string input_value;

	std::cout << "Your Phonebook will be  Now created."  << std::endl;
	while (1)
	{
		std::cout << "Chose what do you want to do. You can select 'ADD','SEARCH','EXIT'!!"  << std::endl;
		std::cout << ">>";
		std::cin >> input_value;
		if (input_value.compare("ADD") == 0)
			phonebook.set_information();
		else if (input_value.compare("SEARCH") == 0)
			phonebook.get_information();
		else if (input_value.compare("EXIT") == 0)
		{
			phonebook.finish_program();
			return (0);
		}
		else 
			std::cout << "You can't use Phonebook without typing 'ADD' or 'SEARCH'!\n"  << std::endl;
	}
    return (0);
}
