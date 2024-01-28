/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:10:21 by razasharuku       #+#    #+#             */
/*   Updated: 2024/01/28 16:03:41 by sraza            ###   ########.fr       */
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
    this->_fixed_point_num_value = i;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixed_point_num_value = f;
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
        this->_fixed_point_num_value = obj.getRawBits();
    }
    return *this;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.getRawBits();
    return os;
}

// デストラクタ
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}


// メンバ関数
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

float	Fixed::toFloat(void) const
{
    return ((float)this->_fixed_point_num_value);
}

int		Fixed::toInt(void) const
{
    return ((int)this->_fixed_point_num_value);
}
