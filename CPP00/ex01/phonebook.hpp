/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:18:51 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/03 15:06:23 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cctype>
# include <cstdlib>

class Contact
{
    private:
        std::string	information[5];
        std::string	info_value[5];
	public:
		Contact(void);
		~Contact(void)
        {
            return ;
        };

		void set_contact(void);
		void get_contact(void);
		void print_allcontact(int max_index);
};

class Phonebook
{
    private:
		Contact	contact[8];
		int		index;
		int		max_index;
	public:
		Phonebook(void);
		~Phonebook(void);

		void set_information();
		void get_information();
		void finish_program();
};

#endif