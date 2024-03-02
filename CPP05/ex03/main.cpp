/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:25:29 by sraza             #+#    #+#             */
/*   Updated: 2024/03/02 10:57:36 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    std::cout << "\033[1;33m" << "++++++++++++++++++ START ++++++++++++++++++++\n" << "\033[0m" << std::endl;
	try
    {
        // それぞれ使うBureaucratのサイングレードとかを変化させてエラーをCatchさせる
        Intern                  New_Intern;
        AForm                   *New_Form;
    
        std::cout << "\033[1;35m" << "+++++++++++++ TEST 1 _START ++++++++++\n" << "\033[0m" << std::endl;
        New_Form = New_Intern.makeForm("ShrubberyCreationForm", "ascii_tree");
        if (!New_Form)
            return (0);
        std::cout << New_Form->getName() << std::endl;
        delete New_Form;
        std::cout << "\033[1;35m" << "+++++++++++++ TEST 1 _END ++++++++++\n" << "\033[0m" << std::endl;


        std::cout << "\033[1;36m" << "+++++++++++++ TEST 2 _START ++++++++++\n" << "\033[0m" << std::endl;
        New_Form = New_Intern.makeForm("RobotomyRequestForm", "Tom");
        if (!New_Form)
            return (0);
        std::cout << New_Form->getName() << std::endl;
        delete New_Form;
        std::cout << "\n \033[1;36m" << "+++++++++++++ TEST 2 _END ++++++++++\n" << "\033[0m" << std::endl;

        std::cout << "\033[1;36m" << "+++++++++++++ TEST 3 _START ++++++++++\n" << "\033[0m" << std::endl;
        New_Form = New_Intern.makeForm("PresidentialPardonForm", "Tom");
        if (!New_Form)
            return (0);
        std::cout << New_Form->getName() << std::endl;
        delete New_Form;
        std::cout << "\n \033[1;36m" << "+++++++++++++ TEST 3 _END ++++++++++\n" << "\033[0m" << std::endl;



        std::cout << "\033[1;36m" << "+++++++++++++ TEST 4 _START ++++++++++\n" << "\033[0m" << std::endl;
        New_Form = New_Intern.makeForm("RazaissocoolForm", "Raza");
        if (!New_Form)
            return (0);
        std::cout << New_Form->getName() << std::endl;
        std::cout << "\n \033[1;36m" << "+++++++++++++ TEST 4 _END ++++++++++\n" << "\033[0m" << std::endl;
        delete New_Form;
	}
    catch(std::exception& e)
    {
		std::cout << e.what() << std::endl;
    }
    std::cout << "\033[1;33m" << "++++++++++++++++++ END ++++++++++++++++++++\n" << "\033[0m" << std::endl;
}

__attribute__((destructor))
static void destructor() {
    system("leaks -q ex");
}