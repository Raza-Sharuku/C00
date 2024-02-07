/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:23:27 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/07 10:54:27 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"


int main(void) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;


    return 0;
}