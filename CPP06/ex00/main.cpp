/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:24:39 by razasharuku       #+#    #+#             */
/*   Updated: 2024/03/12 13:18:25 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong arguments number. [./convert [something you want to convert]]" << std::endl;
        return (0);
    }

    ScalarConverter changer;
    
    changer.convert(argv[1]);
    if (argv[1])
        std::cout << argv[1] << std::endl;
    return (0);

};