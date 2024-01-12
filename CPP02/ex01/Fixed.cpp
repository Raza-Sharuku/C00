/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:10:21 by razasharuku       #+#    #+#             */
/*   Updated: 2024/01/12 15:33:45 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


// コンストラクタ
Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixed_point_num_value = 0;
}

// コピーコンストラクタ
Fixed::Fixed(Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    _fixed_point_num_value = copy.getRawBits();
};

// コピー代入演算子
Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if(this != &obj)
    {
        _fixed_point_num_value = obj.getRawBits();
    }
    return *this;
};

// デストラクタ
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_point_num_value);
};

void Fixed::setRawBits(int const raw)
{
    this->_fixed_point_num_value = raw;
};