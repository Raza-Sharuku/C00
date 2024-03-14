/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:36:06 by razasharuku       #+#    #+#             */
/*   Updated: 2024/03/14 16:31:18 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}


ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& other)
{
}

static bool is_char(const std::string &str)
{
    if (str.length() != 1)
        return (false);
    if (isdigit(str.at(0)) ||  str.at(0) < -127 || str.at(0) > -128)
        return (false);
    return (true);
}

static bool is_int(const std::string &str)
{
    int i = 0;
    if (str[i] == '-')
        i++;
    while (str[i])
        if (!isdigit(str[i]))
            return (false);
    return (true);
}

static bool is_float(const std::string &str)
{
    int i = 0;
    if (str[i] == '-')
        i++;
    while (str[i])
        if (!isdigit(str[i]))
            return (false);
    return (true);
}

static bool is_double(const std::string &str)
{
    int i = 0;
    if (str[i] == '-')
        i++;
    while (str[i])
        if (!isdigit(str[i]))
            return (false);
    return (true);
}

char_type ScalarConverter::getType(const std::string &str)
{
    if (is_char(str))
        return (CHAR);
    else if (is_int(str))
        return (INT);
    else if (is_double(str))
        return (DOUBLE);
    else if (is_float(str))
        return (FLOAT);
    return (INVALID);
}

static void print_infinity(std::string str)
{
    std::cout << "char: impossible" << std::endl;
    if (str == "nan" || str == "nanf")
    {
        std::cout << "int: 0" << std::endl;
        std::cout << "float: 0" << std::endl;
        std::cout << "double: 0" << std::endl;
    }
    else if(str == "-inff" || str == "-inf")
    {
        std::cout << "int: " << INT_MIN << std::endl;
        std::cout << "float: " << __FLT_MIN__ << std::endl;
        std::cout << "double: " << __DBL_MIN__ << std::endl;
    }
    else if (str == "+inf" || str == "+inff")
    {
        std::cout << "int: " << INT_MAX << std::endl;
        std::cout << "float: " << __FLT_MAX__ << std::endl;
        std::cout << "double: " << __DBL_MAX__ << std::endl;
    }
    return ;
}


void ScalarConverter::convert(std::string str)
{
    if (str == "-inff" || str == "+inff" || str == "nanf" 
        || str == "-inf" || str == "+inf"  || str == "nan")
        return (print_infinity(str));
    
    char_type type;

    type = getType(str);
    switch (type)
    {
    case CHAR:
        std::cout << "char " << std::endl;
        break;
    case INT:
        std::cout << "char " << std::endl;
        break;
    case FLOAT:
        std::cout << "char " << std::endl;
        break;
    case DOUBLE:
        std::cout << "char " << std::endl;
        break;
    default:
        std::cout << "the type conversion is impossible" << std::endl;
        break;
    }
}