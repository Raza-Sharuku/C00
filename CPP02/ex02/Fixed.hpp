/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:29:35 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/03 15:31:49 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <cctype>
# include <cstdlib>
# include <cmath>
# include <new>

class Fixed
{
	private:
        int                 _fixed_point_num_value;
        static const int    _fractional_bits = 8;
	public:
		// constructor
		Fixed(void);
		Fixed(const int i);
		Fixed(const float f);

		// copy constructor
		Fixed(Fixed const &obj);

		// copy assignment operator overload
		Fixed& operator=(const Fixed &obj);

		
		// destructor
		~Fixed(void); 

		//　メンバ関数
		float	toFloat(void) const;
		int		toInt(void) const;
		int     getRawBits(void) const;
		void    setRawBits(int const raw);

		bool	Fixed::operator>(const Fixed &obj);
		bool	Fixed::operator<(const Fixed &obj);
		bool	Fixed::operator>=(const Fixed &obj);
		bool	Fixed::operator<=(const Fixed &obj);
		bool	Fixed::operator==(const Fixed &obj);
		bool	Fixed::operator!=(const Fixed &obj);

		// 四則演算の分
		Fixed operator+(const Fixed &obj);
		Fixed operator-(const Fixed &obj);
		Fixed operator*(const Fixed &obj);
		Fixed operator/(const Fixed &obj);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif