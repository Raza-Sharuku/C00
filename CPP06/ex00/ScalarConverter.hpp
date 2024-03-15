/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:36:02 by razasharuku       #+#    #+#             */
/*   Updated: 2024/03/12 13:58:20 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>
# include <string.h>
# include <float.h>


typedef enum type
{
    INVALID = -1,
    CHAR = 1,
    INT = 2,
    FLOAT = 3,
    DOUBLE = 4,
    INFINITE = 5
};

class ScalarConverter
{
    private:
        std::string     m_char;
        int             m_int;
        float           m_float;
        double          m_double;
    public:
        // コンストラクタ
        ScalarConverter();
        // コピーコンストラクタ
        ScalarConverter(const ScalarConverter& other);
        // コピー代入演算子
        ScalarConverter &operator=(const ScalarConverter& other);
        // デストラクタ
        virtual ~ScalarConverter(void);

        // メンバ変数
        void                    convert(std::string str);
        void                    print_convert_value(void);
};

int check_infinity(std::string str);
int find_type(std::string str);

#endif