/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:35:58 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/27 19:22:39 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), m_target(target)
{
    std::cout << "RobotomyRequestForm: Default constructor called." << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), m_target(other.m_target)
{
    std::cout << "RobotomyRequestForm: Copy constructor called." << std::endl;
    return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    std::cout << "RobotomyRequestForm: Copy assigment operator called." << std::endl;
    if (this != &other)
        return (*this);
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm: Destructor called." << std::endl;
    return ;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->get_sign() == false)
        throw AForm::UnSignedException();
    else if (executor.getGrade() > this->get_exec_Grade())
        throw AForm::GradeTooLowException();
    else 
    {
        static int i;
        if (i % 2 == 0)
            std::cout << "ウィーーーーンガシャ" << this->m_target << "はロボット化しました。" << std::endl;
        else 
            std::cout << "ピピー！失敗しました。" << this->m_target << "はまだロボット化していません。" << std::endl;
        i++;
    }
    return ;
}