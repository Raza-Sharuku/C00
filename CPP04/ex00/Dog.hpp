/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:11:46 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/16 11:25:02 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	private:
		std::string		m_type;

	public:
		// コンストラクタ
		Dog(void);
		// コピーコンストラクタ
		Dog(const Dog& other);
		// コピー代入演算子
		Dog &operator=(const Dog& other);
		// デストラクタ
		~Dog(void);


		// メンバ関数
		void			makeSound(void) const;
		std::string 	getType(void) const;
};


#endif