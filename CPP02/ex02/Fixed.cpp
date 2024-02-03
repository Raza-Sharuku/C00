/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:10:21 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/03 15:38:38 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


// Constructor
Fixed::Fixed(void)
{
    this->_fixed_point_num_value = 0;
    return ;
}

Fixed::Fixed(const int i)
{
    this->_fixed_point_num_value = i << this->_fractional_bits;
}

Fixed::Fixed(const float f)
{
    this->_fixed_point_num_value = roundf(f * (1 << this->_fractional_bits));
    return ;
}

// Copy Constructor
Fixed::Fixed(Fixed const &obj) : _fixed_point_num_value(obj._fixed_point_num_value)
{
    this->_fixed_point_num_value = getRawBits();
    return ;
}

// Destructor
Fixed::~Fixed(void)
{
    return ;
}

// Copy Assignment Operator Overload
Fixed& Fixed::operator=(const Fixed &obj)
{
    if (this != &obj)
    {
        this->_fixed_point_num_value = obj._fixed_point_num_value;
    }
    return *this;
}


// Member Function
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

// 比較演算子の分
bool    Fixed::operator>(const Fixed &obj)
{

    return (this->_fixed_point_num_value > obj._fixed_point_num_value);
}

bool    Fixed::operator<(const Fixed &obj)
{

    return (this->_fixed_point_num_value < obj._fixed_point_num_value);
}

bool    Fixed::operator>=(const Fixed &obj)
{

    return (this->_fixed_point_num_value >= obj._fixed_point_num_value);
}

bool    Fixed::operator<=(const Fixed &obj)
{

    return (this->_fixed_point_num_value <= obj._fixed_point_num_value);
}

bool    Fixed::operator==(const Fixed &obj)
{

    return (this->_fixed_point_num_value == obj._fixed_point_num_value);
}

bool    Fixed::operator!=(const Fixed &obj)
{

    return (this->_fixed_point_num_value != obj._fixed_point_num_value);
}

// 四則演算子の分
Fixed   Fixed::operator+(const Fixed &obj)
{
    Fixed new_value;

    new_value._fixed_point_num_value = this->_fixed_point_num_value + obj._fixed_point_num_value;
    return (new_value);
}

Fixed   Fixed::operator-(const Fixed &obj)
{
    Fixed new_value;

    new_value._fixed_point_num_value = this->_fixed_point_num_value - obj._fixed_point_num_value;
    return (new_value);
}

Fixed   Fixed::operator*(const Fixed &obj)
{
    Fixed new_value;

    new_value._fixed_point_num_value = (this->_fixed_point_num_value * obj._fixed_point_num_value) >> this->_fractional_bits;
    return (new_value);
}

Fixed   Fixed::operator/(const Fixed &obj)
{
    Fixed new_value;

    new_value._fixed_point_num_value = (this->_fixed_point_num_value / obj._fixed_point_num_value) * 256.0;
    return (new_value);
}



// メンバ関数以外
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}