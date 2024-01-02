/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:10:21 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/23 11:03:04 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixed_point_num_value = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Default Constructor" << std::endl;
    this->_fixed_point_num_value = 0;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{

}

void Fixed::setRawBits(int const raw)
{
    
}