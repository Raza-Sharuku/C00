/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:10:21 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/03 12:25:16 by razasharuku      ###   ########.fr       */
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

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixed_point_num_value = i << this->_fractional_bits;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixed_point_num_value = roundf(f * (1 << this->_fractional_bits));
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
Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->_fixed_point_num_value = obj._fixed_point_num_value;
    }
    return *this;
};

// デストラクタ
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}


// メンバ関数
int Fixed::getRawBits(void) const
{
    return (this->_fixed_point_num_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixed_point_num_value = raw;
    return ;
}

float	Fixed::toFloat(void) const
{
    return ((float)(this->_fixed_point_num_value / 256.0));
}

int		Fixed::toInt(void) const
{
    return ((int)(this->_fixed_point_num_value >> this->_fractional_bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}