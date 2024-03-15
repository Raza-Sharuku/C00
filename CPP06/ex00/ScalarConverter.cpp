/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:36:06 by razasharuku       #+#    #+#             */
/*   Updated: 2024/03/12 13:17:11 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter: Constructor called" << std::endl;
    return ;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter: Destructor called" << std::endl;
    return ;
}


ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    std::cout << "ScalarConverter: Copy Constructor called" << std::endl;
    *this = other;
    return ;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& other)
{
    std::cout << "ScalarConverter: Copy assignment operator called." << std::endl;
    if (this != &other)
    {
        m_char = other.m_char;
        m_int = other.m_int;
        m_float = other.m_float;
        m_double = other.m_double;
    }
    return (*this);
}

void    ScalarConverter::convert(std::string str)
{
    
}