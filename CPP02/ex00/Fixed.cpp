/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:10:21 by razasharuku       #+#    #+#             */
/*   Updated: 2024/01/27 15:28:18 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixed_point_num_value = 0;
    return ;
}

// copy constructor
Fixed::Fixed(const Fixed &obj) : _fixed_point_num_value(obj._fixed_point_num_value)
{
    std::cout << "Copy Constructor called" << std::endl;
    this->_fixed_point_num_value = getRawBits();
    return ;
}

// copy assignment operator overload
Fixed &Fixed::operator = (const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->_fixed_point_num_value = getRawBits();
    }
    return *this;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_point_num_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixed_point_num_value = raw;
    return ;
}