/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:02:27 by razasharuku       #+#    #+#             */
/*   Updated: 2024/03/19 10:12:30 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string.h>
#include <exception>
#include "Data.hpp"

class Serializer
{
    private:
        // コンストラクタ
        Serializer();
        // コピーコンストラクタ
        Serializer(const Serializer& other);
    public:
        // コピー代入演算子
        Serializer &operator=(const Serializer& other);
        // デストラクタ
        ~Serializer(void);
        // メンバ変数
        static uintptr_t        serialize(Data* ptr);
        static Data*            deserialize(uintptr_t raw);
};



#endif