/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:14:11 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/12 13:26:13 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		// コンストラクタ
		FragTrap(void);
		FragTrap(std::string name);
		// コピーコンストラクタ
		FragTrap(const FragTrap& other);
		// コピー代入演算子
		FragTrap &operator=(const FragTrap& other);
		// デストラクタ
		~FragTrap(void);

		// メンバ関数
		void			highFivesGuys(void);
};


#endif