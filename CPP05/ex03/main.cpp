/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:25:29 by sraza             #+#    #+#             */
/*   Updated: 2024/03/01 09:20:33 by razasharuku      ###   ########.fr       */
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
        Bureaucrat              Harry("Harry",1);
        ShrubberyCreationForm   form("raza");
        RobotomyRequestForm     form1("robot");
        PresidentialPardonForm  form2("Sirius Black");
        Intern                  New_Intern;
        AForm                   *New_Form;
    
        std::cout << Harry;

        std::cout << "\033[1;35m" << "+++++++++++++ TEST 1 _START ++++++++++\n" << "\033[0m" << std::endl;
        Harry.signForm(form1);
        form1.execute(Harry);
        form1.execute(Harry);
        form1.execute(Harry);
        form1.execute(Harry);

        std::cout << "\033[1;35m" << "+++++++++++++ TEST 1 _END ++++++++++\n" << "\033[0m" << std::endl;

        std::cout << "\033[1;36m" << "+++++++++++++ TEST 2 _START ++++++++++\n" << "\033[0m" << std::endl;
        New_Form = New_Intern.makeForm("PresidentialPardonForm", "Tom");
        New_Form->get_sign_Grade();
        delete New_Form;
        std::cout << "\n \033[1;36m" << "+++++++++++++ TEST 2 _END ++++++++++\n" << "\033[0m" << std::endl;

        std::cout << "\033[1;36m" << "+++++++++++++ TEST 3 _START ++++++++++\n" << "\033[0m" << std::endl;
        New_Form = New_Intern.makeForm("RazaissocoolForm", "Raza");
        New_Form->get_sign_Grade();
        std::cout << "\n \033[1;36m" << "+++++++++++++ TEST 3 _END ++++++++++\n" << "\033[0m" << std::endl;
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