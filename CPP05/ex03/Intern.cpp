/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:16:23 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/28 13:24:53 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Intern: Default constructor called." << std::endl;
    return ;
}

Intern::Intern(const Intern &other)
{
    std::cout << "Intern: Bureaucrat: Copy constructor called." << std::endl;
    *this = other;
    return ;
}

Intern &Intern::operator=(const Intern &other)
{
    std::cout << "Intern: Bureaucrat: Copy assigment operator called." << std::endl;
    if (this != &other)
        return (*this);
    return (*this);
}

Intern::~Intern(void)
{
    std::cout << "Intern: Destructor called." << std::endl;
    return ;
}

AForm   *Intern::makeForm(const std::string form_name, const std::string form_target)
{
    
}