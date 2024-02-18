/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:08:37 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/17 20:23:33 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string		m_type;

	public:
		// コンストラクタ
		Animal(void);
		// コピーコンストラクタ
		Animal(const Animal& other);
		// コピー代入演算子
		Animal &operator=(const Animal& other);
		// デストラクタ
		virtual ~Animal(void);


		// メンバ関数
		virtual void			makeSound(void) const = 0;
		virtual std::string 	getType(void) const;
};


#endif