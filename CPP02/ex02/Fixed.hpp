/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:29:35 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/09 10:53:29 by razasharuku      ###   ########.fr       */
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

		// 比較演算子
		bool	operator>(const Fixed &obj) const;
		bool	operator<(const Fixed &obj) const;
		bool	operator>=(const Fixed &obj) const;
		bool	operator<=(const Fixed &obj) const;
		bool	operator==(const Fixed &obj) const;
		bool	operator!=(const Fixed &obj) const;

		// 四則演算子
		Fixed operator+(const Fixed &obj) const;
		Fixed operator-(const Fixed &obj) const;
		Fixed operator*(const Fixed &obj) const;
		Fixed operator/(const Fixed &obj) const;

		// インクリメント・デクリメント
		Fixed& operator++(void);
		Fixed  operator++(int);

		Fixed& operator--(void);
		Fixed  operator--(int);

		// 代償関係を決めるもの
		static Fixed& min(Fixed& left, Fixed& right);
		static const Fixed& min(const Fixed& left, const Fixed& right);

		static Fixed& max(Fixed& left, Fixed& right);
		static const Fixed& max(const Fixed& left, const Fixed& right);

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif