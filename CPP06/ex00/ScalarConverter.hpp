/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:36:02 by razasharuku       #+#    #+#             */
/*   Updated: 2024/03/14 16:31:10 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream>
#include <string.h>
#include <exception>


typedef enum char_type
{
    INVALID = -1,
    CHAR = 1,
    INT = 2,
    FLOAT = 3,
    DOUBLE = 4,
};

class ScalarConverter
{
    private:
        // コンストラクタ
        ScalarConverter();
        // コピーコンストラクタ
        ScalarConverter(const ScalarConverter& other);
        // コピー代入演算子
        ScalarConverter &operator=(const ScalarConverter& other);
        // デストラクタ
        ~ScalarConverter(void);
    public:
        // メンバ変数
        static void         convert(std::string str);
        static char_type    getType(const std::string &str);
};



#endif