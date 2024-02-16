/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:17:31 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/16 11:29:39 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string		m_type;

	public:
		// コンストラクタ
		WrongAnimal(void);
		// コピーコンストラクタ
		WrongAnimal(const WrongAnimal& other);
		// コピー代入演算子
		WrongAnimal &operator=(const WrongAnimal& other);
		// デストラクタ
		virtual ~WrongAnimal(void);


		// メンバ関数
		void			makeSound(void) const;
		std::string 	getType(void) const;
};


#endif