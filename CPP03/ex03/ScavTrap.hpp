/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:06:29 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/14 14:44:49 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:

	public:
		// コンストラクタ
		ScavTrap(void);
		ScavTrap(std::string name);
		// コピーコンストラクタ
		ScavTrap(const ScavTrap& other);
		// コピー代入演算子
		ScavTrap &operator=(const ScavTrap& other);
		// デストラクタ
		virtual ~ScavTrap(void);

		// メンバ関数
		virtual void		attack(const std::string& target);
		void			guardGate(void);
};


#endif