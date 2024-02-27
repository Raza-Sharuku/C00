/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:36:46 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/27 19:18:26 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), m_target(target)
{
    std::cout << "ShrubberyCreationForm: Default constructor called." << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), m_target(other.m_target)
{
    std::cout << "ShrubberyCreationForm: Copy constructor called." << std::endl;
    return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    std::cout << "ShrubberyCreationForm: Copy assigment operator called." << std::endl;
    if (this != &other)
        return (*this);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm: Destructor called." << std::endl;
    return ;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->get_sign() == false)
        throw AForm::UnSignedException();
    else if (executor.getGrade() > this->get_exec_Grade())
        throw AForm::GradeTooLowException();
    std::ofstream file(this->m_target + "_shrubbery");
    
    file << "     /\\         " << std::endl;
    file << "    //0\\        " << std::endl;
    file << "   /o//\\\\\\    " << std::endl;
    file << "  /////o\\\\\\\\ " << std::endl;
    file << "     ||||        " << std::endl;
    file << "wwwww||||wwwwwww " << std::endl;
    file << "wwwww||||wwwwwww " << std::endl;
    file << "wwwwwwwwwwwwwwww " << std::endl;
    file << "wwwwwwwwwwwwwwww " << std::endl;
    file.close();
    std::cout << this->m_target + "_shrubbery" << " File is ready!" << std::endl;
    return ;
}