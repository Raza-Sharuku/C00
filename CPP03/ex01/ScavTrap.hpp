/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:06:29 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/12 12:55:13 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		// コンストラクタ
		ScavTrap(void);
		ScavTrap(std::string name);
		// デストラクタ
		~ScavTrap(void);

		// メンバ関数
		void			attack(const std::string& target);
		
};


#endif