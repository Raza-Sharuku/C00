/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:24:39 by razasharuku       #+#    #+#             */
/*   Updated: 2024/03/02 15:59:06 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <exception>


int main(void)
{
    int i = 10000 / 10;

    char a = static_cast<char>(i);   
    std::cout << a << std::endl;
}