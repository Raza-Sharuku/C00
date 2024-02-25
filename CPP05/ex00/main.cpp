/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:25:29 by sraza             #+#    #+#             */
/*   Updated: 2024/02/25 14:27:37 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    std::string word = "four";

    
    try 
    {
        Bureaucrat my_bureaucrat("Tom", 0);
        std::cout << "My garde is -> " << my_bureaucrat.getGrade() << std::endl;
        my_bureaucrat.GradeTooHighException();
        std::cout << "My garde is -> " << my_bureaucrat.getGrade() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "first exception : " << e.what()  << std::endl;
    }

    
    
}