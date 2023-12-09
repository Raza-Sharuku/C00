/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:31:52 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/09 13:25:21 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>


int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPRT = &string;
	std::string &stringREF = string;

	std::cout << "memory address string variable: "<< &string << std::endl;
	std::cout << "memory address stringPTR: " << stringPRT << std::endl;
	std::cout << "memory address stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "string variable: "<<  std::setw(24) << string << std::endl;
	std::cout << "stringPTR: "<<  std::setw(30) << *stringPRT << std::endl;
	std::cout << "stringREF: "<<  std::setw(30) << stringREF << std::endl;

	return (0);
}