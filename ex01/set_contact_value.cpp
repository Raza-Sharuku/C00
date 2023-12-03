/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_contact_value.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:17:04 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/03 14:11:36 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(void)
{
	this->information[0] = "First Name";
	this->information[1] = "Last Name";
	this->information[2] = "Nickname";
	this->information[3] = "Phone Number";
	this->information[4] = "Darkest Secret";
}

void Contact::set_contact(void)
{
	std::string	inputs;
	int			i;

	i = 0;
	std::cout << "Now you can registered contact informations." << std::endl;
	while (i < 5)
	{
		std::cout << "Enter your" << this->information[i]  << std::endl;
		std::cin >> this->info_value[i];
		i++;
	}
	std::cout << "Your contact have been successfully registered " << std::endl;
	return ;
}

void Contact::get_contact(void)
{
	return ;
}
