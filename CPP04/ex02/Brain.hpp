/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:32:54 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/17 11:22:28 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "Animal.hpp"

class Brain
{
	private:
		std::string		*ideas;

	public:
		// コンストラクタ
		Brain(void);
		// コピーコンストラクタ
		Brain(const Brain& other);
		// コピー代入演算子
		Brain &operator=(const Brain& other);
		// デストラクタ
		~Brain(void);

		std::string 	getidea(unsigned int num) const;
		void 			setidea(unsigned int num, std::string idea) const;

};


#endif