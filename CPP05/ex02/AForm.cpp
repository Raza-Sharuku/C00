/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:33:29 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/27 14:19:54 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, unsigned int sign_grade, unsigned int exec_grade) 
: m_name(name), m_sign_grade(sign_grade), m_exec_grade(exec_grade), m_singed(false)
{
    std::cout << this->m_name << ": AForm: Default constructor called." << std::endl;
    if (m_sign_grade < 1 || m_exec_grade < 1)
    {
        std::cout << "This grade is out_of_range." << std::endl;
        throw (GradeTooHighException());
    }
    if (m_sign_grade > 150 || m_exec_grade > 150)
    {
        std::cout << "This grade is out_of_range." << std::endl;
        throw (GradeTooLowException());
    }
    return ;
}

AForm::AForm(const AForm& other)
: m_name(other.m_name), m_sign_grade(other.m_sign_grade), m_exec_grade(other.m_exec_grade), m_singed(other.m_singed)
{
    std::cout << this->m_name << ": AForm: Copy constructor called." << std::endl;
    return ;
}

AForm &AForm::operator=(const AForm& other)
{
    std::cout << this->m_name << ": AForm: Copy assigment operator called." << std::endl;
    if (this != &other)
    {
        this->m_singed = other.m_singed;
    }
    return (*this);
}

AForm::~AForm(void)
{
    std::cout << this->m_name << ": AForm: Destructor called." << std::endl;
    return ;
}

const std::string AForm::getName(void) const
{
    return (this->m_name);
}

bool AForm::get_sign(void) const
{
    return (this->m_singed);
}

const unsigned int& AForm::get_sign_Grade(void) const
{
    return (this->m_sign_grade);
}

const unsigned int& AForm::get_exec_Grade(void) const
{
    return (this->m_exec_grade);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > this->get_sign_Grade())
        throw AForm::GradeTooLowException();
    else
        this->m_singed = true;
}


const char *AForm::GradeTooHighException::what(void) const throw()
{
    return ("AForm: GradeTooHighException called");
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
    return ("AForm: GradeTooLowException called");
}

std::ostream	&operator<<(std::ostream &o, AForm &a)
{
    o << "---------------- " << a.getName() << " ---------------" << "\n"\
    << "Sign_Grade :" << a.get_sign_Grade() << "\n"\
    << "Execute_Grade :" << a.get_exec_Grade() << std::endl;
	return (o);
}