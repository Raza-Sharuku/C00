/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:11:46 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/17 20:10:08 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		std::string		m_type;
		Brain			*brain;

	public:
		// コンストラクタ
		Dog(void);
		// コピーコンストラクタ
		Dog(const Dog& other);
		// コピー代入演算子
		Dog &operator=(const Dog& other);
		// デストラクタ
		virtual ~Dog(void);


		// メンバ関数
		void			makeSound(void) const;
		std::string 	getType(void) const;
		std::string 	getidea(unsigned int num) const;
		void 			setidea(unsigned int num, std::string idea) const;
};


#endif