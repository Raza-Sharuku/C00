/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:24:39 by razasharuku       #+#    #+#             */
/*   Updated: 2024/03/19 11:31:58 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data        *new_data;
    uintptr_t   converted_uptr;
    Data        *converted_data_ptr;

    new_data = new Data;
    new_data->num = 100;
    new_data->str = "raza";

    std::cout << "\033[1;33m" << "++++++++++++++++++ test start ++++++++++++++++++++\n" << "\033[0m" << std::endl;
    std::cout << "new_data->num :" << new_data->num << "   new_data->str :" << new_data->str << std::endl;
    std::cout << std::endl;

    converted_uptr = Serializer::serialize(new_data);
    std::cout << "Serializer::serialize :" << converted_uptr << std::endl;
    std::cout << std::endl;

    converted_data_ptr = Serializer::deserialize(converted_uptr);
    std::cout << "Serializer::deserialize :" << converted_data_ptr << std::endl;
    std::cout << std::endl;


    std::cout << "converted_data_ptr->num :" << converted_data_ptr->num << "   converted_data_ptr->str :" << converted_data_ptr->str << std::endl;
    std::cout << std::endl;


    std::cout << "\033[1;33m" << "++++++++++++++++++ test end ++++++++++++++++++++\n" << "\033[0m" << std::endl;



    return (0);
}