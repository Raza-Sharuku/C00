/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:29:35 by razasharuku       #+#    #+#             */
/*   Updated: 2024/01/28 16:00:44 by sraza            ###   ########.fr       */
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
		Fixed(const Fixed &obj);

		// copy assignment operator overload
		Fixed& operator = (const Fixed &obj);
		//std::ostream& operator << (std::ostream& os, Fixed& a) const;
		
		// destructor
		~Fixed(void); 

	float	toFloat(void) const;
	int		toInt(void) const;
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif