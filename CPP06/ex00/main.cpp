/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:24:39 by razasharuku       #+#    #+#             */
/*   Updated: 2024/03/09 13:13:18 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <exception>




int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong arguments number. [./convert [something you want to convert]]" << std::endl;
        return (0);
    }
    if (argv[1])
        std::cout << argv[1] << std::endl;
    return (0);

};