/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_contact_value.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:17:04 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/03 16:27:06 by sraza            ###   ########.fr       */
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
	std::cout << "Your contact have been successfully registered." << std::endl;
	return ;
}

// index番号に応じたものの全ての情報を表示する。
// 必要な項目の洗い出しと構造化をもう一度やってみる必要がある。
void Contact::get_contact(void)
{

	std::cout << std::left << std::setw(20) << "first name" << ": " <<  std::endl;
	return ;
}

// 全ての連絡先の情報が４項目のみ記入されるようにする
void Contact::print_allcontact(int max_index)
{
	int i = 0;

	std::cout << "|0123456789|0123456789|0123456789|0123456789|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|**********|**********|**********|**********|" << std::endl;
	while (i < max_index)
	{
		std::cout <<  "|" << std::setw(10) << (i + 1) <<  "|";
		while (this.)
 		std::cout << std::setw(10) <<  << std::endl;

	}
	return ;
}