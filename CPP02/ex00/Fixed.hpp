/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:29:35 by razasharuku       #+#    #+#             */
/*   Updated: 2024/01/12 15:31:00 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <cctype>
# include <cstdlib>
# include <new>

class Fixed
{
	private:
        int                 _fixed_point_num_value;
    //     static const int    _fractional_bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed &copy);
		Fixed& operator=(const Fixed &obj);
		~Fixed(void);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};


#endif