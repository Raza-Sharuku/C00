/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_phonebook.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:22:39 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/04 09:38:47 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
    this->index = 0;
    this->max_index = 0;
    std::cout << "Phonebook Program is start." << std::endl;
    return ;
};

Phonebook::~Phonebook(void)
{
    std::cout << "Destructor" << std::endl;
    return ;
};


void    Phonebook::set_information(void)
{
    int i;

    
    if (this->index > 7)
    {
        // ここで上書きしても追記したいかどうかを確認するコードを入れる
        this->index = this->index % 8;
    }
    this->contact[index].set_contact();
    this->index += 1;
    if (this->max_index <= 7)
        this->max_index += 1;
    return ;
};

void    Phonebook::get_information(void)
{
    std::string	num;
    int         i;

	std::cout << "Input the index_number which you want to search." << std::endl;
	std::cout << "Allowed Index_numbers are 1 to" << (this->max_index + 1) << std::endl;
	std::cin >> num;

    if (num.compare("0") == 0 || num.compare(std::to_string(this->max_index + 1)) > 0 || num.length() > 1)
    {
        std::cout << "Wrong index_number. Allowed Index_numbers are 1 to" << (this->max_index + 1) << std::endl;
        return ;
    }
    else 
    {
        i = std::atoi(num.c_str());
    	this->contact[i - 1].get_contact();
    }
    return ;
};

void    Phonebook::finish_program(void)
{
    std::cout << "Exiting from program. Data will be cleared." << std::endl;
    return ;
};