/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_contact_value.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:17:04 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/04 12:57:00 by razasharuku      ###   ########.fr       */
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
		std::cout << "Enter your " << this->information[i]  << std::endl;
		std::cin >> this->info_value[i];
		i++;
	}
	std::cout << "Your contact have been successfully registered." << std::endl;
	return ;
}

// index番号に応じたものの全ての情報を表示する。
// 必要な項目の洗い出しと構造化をもう一度やってみる必要がある。
void Contact::get_contact(void)
{

	std::cout << std::left << std::setw(20) << "Fisrt Name" << ":" << this->info_value[0] << std::endl;
	std::cout << std::left << std::setw(20) << "Last Name" << ":" << this->info_value[1] << std::endl;
	std::cout << std::left << std::setw(20) << "Nickname" << ":" << this->info_value[2] << std::endl;
	std::cout << std::left << std::setw(20) << "Phone Number" << ":" << this->info_value[3] << std::endl;
	std::cout << std::left << std::setw(20) << "Darkest Secret" << ":" << this->info_value[4] << std::endl;
	return ;
}

// 全ての連絡先の情報が４項目のみ記入されるようにする
void Contact::print_allcontact(int max_index)
{
	int i = 0;
	int j = 0;

	std::cout << "|0123456789|0123456789|0123456789|0123456789|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|";
	while (i < max_index)
	{
		std::cout << "" << std::endl;
		std::cout <<  "|" << std::setw(10) << (i + 1) <<  "|";
		j = 0;
		while (j <= 2)
		{
			if (this[i].info_value[j].length() > 10)
 				std::cout << this[i].info_value[j].substr(0, 9) << "." << "|";
			else 
 				std::cout << std::setw(10) << this[i].info_value[j] << "|";
			j++;
		}
		i++;
	}
	std::cout << "\n|----------|----------|----------|----------|" << std::endl;
	return ;
}