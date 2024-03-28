/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 09:20:20 by razasharuku       #+#    #+#             */
/*   Updated: 2024/03/22 09:42:32 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
}

Base            *generate(void)
{
    int num = std::rand() % 3;
    if (num == 0)
    {
        A *a = new A;
        return (a);
    } 
    else if (num == 1)
    {
        B *b = new B;
        return (b);
    }
    else 
    {
        C *c = new C;
        return (c);
    }
}


void            identify(Base* p)
{

}


void            identify(Base& p)
{

}

