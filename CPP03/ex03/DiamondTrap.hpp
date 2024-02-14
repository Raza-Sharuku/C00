/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:26:41 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/14 14:55:20 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, FragTrap
{
	private:
		std::string _name;
	public:
		// コンストラクタ
		DiamondTrap(void);
		DiamondTrap(std::string name);
		// コピーコンストラクタ
		DiamondTrap(const DiamondTrap& other);
		// コピー代入演算子
		DiamondTrap &operator=(const DiamondTrap& other);
		// デストラクタ
		~DiamondTrap(void);

		// メンバ関数
		void		attack(const std::string& target);
		void		whoAmI(void);
};


#endif