/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:25:29 by sraza             #+#    #+#             */
/*   Updated: 2024/02/27 14:22:31 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << "\033[1;34m" << "++++++++++++++++++ START ++++++++++++++++++++\n" << "\033[0m" << std::endl;
	try
    {
        std::cout << "\033[1;35m" << "+++++++++++++ TEST 1 _START ++++++++++\n" << "\033[0m" << std::endl;
        Bureaucrat raza("raza",33);
        Bureaucrat Tom("Tom",150);
        Bureaucrat Harry("Harry",1);
        Form form("Piece of Paper", 40, 50);

        
        std::cout << "\n" << raza;
        std::cout << Tom;
        std::cout << Harry;
        std::cout << "\n" << form;
        std::cout << "\033[1;35m" << "+++++++++++++ TEST 1 _END ++++++++++\n" << "\033[0m" << std::endl;






        std::cout << "\033[1;36m" << "+++++++++++++ TEST 2 _START ++++++++++\n" << "\033[0m" << std::endl;
        raza.signForm(form);
        std::cout << std::endl;
        Harry.signForm(form);
        std::cout << std::endl;
        Tom.signForm(form);
        std::cout << std::endl;

	}
    catch(std::exception& e)
    {
		std::cout << e.what() << std::endl;
        std::cout << "\033[1;36m" << "+++++++++++++ TEST 2 _END ++++++++++\n" << "\033[0m" << std::endl;
    }
   
    std::cout << "\033[1;34m" << "++++++++++++++++++ END ++++++++++++++++++++\n" << "\033[0m" << std::endl;


    
    
}