/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raza.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:35:07 by razasharuku       #+#    #+#             */
/*   Updated: 2024/01/09 17:24:40 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    // std::stringのメンバ関数一覧
    std::string str;

    // 文字列の操作
    std::cout << str.append("append_string") << std::endl;
    std::cout << str.assign("assign_string") << std::endl;
    std::cout << str.insert(2, "insert_string") << std::endl;
    std::cout << str.erase(2, 5) << std::endl;
    std::cout << str.replace(2, 3, "replace_string") << std::endl;

    // 文字列の検索
    str = "qwertyuioplkjhgfdsazxcvbnm";
    size_t pos = str.find("search_string");
    std::cout << "pos = " << pos << std::endl;
    pos = str.rfind("search_string");
    std::cout << "pos = " << pos << std::endl;
    pos = str.find_first_of("characters");
    std::cout << "pos = " << pos << std::endl;
    pos = str.find_last_of("characters");
    std::cout << "pos = " << pos << std::endl;
    pos = str.find_first_not_of("characters");
    std::cout << "pos = " << pos << std::endl;
    pos = str.find_last_not_of("characters");
    std::cout << "pos = " << pos << std::endl;

    // 文字列の比較
    // int compareResult = str.compare("other_string");

    // 部分文字列の取得
    std::cout <<  str.substr(0, 5)  << std::endl;

    // 文字列の変換
    // const char* str = str.c_str();
    // const char* data = str.data();
    // str.resize(15);
    // std::cout << "String: " << str << std::endl;
    // str.resize(20, 'A');
    // std::cout << "String: " << str << std::endl;

    // // 文字列の属性
    // size_t length = str.length();
    // size_t size = str.size();
    // bool empty = str.empty();

    // 出力
    std::cout << "String: " << str << std::endl;

    return 0;
}

/*
testssss

./ex04 (引数不足)
./ex04 raza raza raza (存在しないファイル)
./ex04 raza.cpp raza raza (chmod で権限をなくしてみる)
./ex04 raza.cpp std STD (文字が入れ替わる)

*/ 
