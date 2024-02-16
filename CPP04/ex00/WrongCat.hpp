/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:17:34 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/16 11:31:51 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string		m_type;

	public:
		// コンストラクタ
		WrongCat(void);
		// コピーコンストラクタ
		WrongCat(const WrongCat& other);
		// コピー代入演算子
		WrongCat &operator=(const WrongCat& other);
		// デストラクタ
		~WrongCat(void);


		// メンバ関数
		void			makeSound(void) const;
		std::string 	getType(void) const;
};


#endif