/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:10:31 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/16 11:24:58 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	private:
		std::string		m_type;

	public:
		// コンストラクタ
		Cat(void);
		// コピーコンストラクタ
		Cat(const Cat& other);
		// コピー代入演算子
		Cat &operator=(const Cat& other);
		// デストラクタ
		~Cat(void);


		// メンバ関数
		void			makeSound(void) const;
		std::string 	getType(void) const;
};


#endif