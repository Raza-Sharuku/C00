/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:10:31 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/17 14:47:14 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		std::string		m_type;
		Brain			*brain;

	public:
		// コンストラクタ
		Cat(void);
		// コピーコンストラクタ
		Cat(const Cat& other);
		// コピー代入演算子
		Cat &operator=(const Cat& other);
		// デストラクタ
		virtual ~Cat(void);


		// メンバ関数
		void			makeSound(void) const;
		std::string 	getType(void) const;
		std::string 	getidea(unsigned int num) const;
		void 			setidea(unsigned int num, std::string idea) const;
};


#endif