/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:24:52 by sraza             #+#    #+#             */
/*   Updated: 2024/02/20 15:55:04 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    std::cout << "Bureaucrat: Default constructor called." << std::endl;
    // this->m_name = "default";
    this->m_grade = 1;
    return ;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : m_name(name), m_grade(grade)
{
    std::cout << "Bureaucrat: Default constructor called." << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    std::cout << "Bureaucrat: Copy constructor called." << std::endl;
    *this = other;
    return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& other)
{
    std::cout << "Bureaucrat: Copy assigment operator called." << std::endl;
    if (this != &other)
    {
        // this->m_name = other.m_name;
        this->m_grade = other.m_grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat: Destructor called." << std::endl;
    return ;
}

// member function
std::string Bureaucrat::getName(void)
{
    return (this->m_name);
}

unsigned int Bureaucrat::getGrade(void)
{
    return (this->m_grade);
}

void Bureaucrat::GradeTooHighException(void)
{
    if (this->m_grade < 1)
    {
        std::cout << "This grade is out_of_range.Decreasing Grade - 1" << std::endl;
        this->operator++();
    }
    return ;
}

void Bureaucrat::GradeTooLowException(void)
{
    if (this->m_grade > 150)
    {
        std::cout << "This grade is out_of_range.Increasing Grade + 1" << std::endl;
        this->operator--();
    }
    return ;
}


// increment and decrement
Bureaucrat &Bureaucrat::operator++(void)
{
    this->m_grade += 1;
    return (*this);
}

Bureaucrat &Bureaucrat::operator--(void)
{
    this->m_grade -= 1;
    return (*this);
}