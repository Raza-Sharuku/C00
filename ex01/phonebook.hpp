/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:18:51 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/02 11:48:12 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cctype>

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