/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:10:21 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/09 17:23:34 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


// コンストラクタ
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
    this->_fixed_point_num_value = obj.getRawBits();
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
};

// デストラクタ
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
