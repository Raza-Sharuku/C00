/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:32:51 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/17 13:58:11 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


// Orthodox Canonical Form
Brain::Brain(void)
{
    this->ideas = new std::string[100];
    int i = 0;

    std::cout << "Brain :Constructor called." << std::endl;
    while (i < 100)
    {
        std::string my_idea = "some ideas_" + std::to_string(i + 1);
        this->ideas[i] = my_idea;
        i++;
    }
    return ;
}

Brain::~Brain(void)
{
    std::cout << "Brain :Destructor called. delete my ideas" << std::endl;
    delete [] (this->ideas);
    return ;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain :Copy Constructor called." << std::endl;
    int i = 0;

    this->ideas = new std::string[100];
    while (i < 100)
    {
        this->ideas[i] = other.ideas[i];
        i++;
    }
    return ;
}

Brain &Brain::operator=(const Brain& other)
{
    int i = 0;
    std::cout << "Brain :Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        delete[] this->ideas;
        this->ideas = new std::string[100];
        while (i < 100)
        {
            this->ideas[i] = other.ideas[i];
            i++;
        }
    }
        
    return *this;
}
// Orthodox Canonical Form


std::string Brain::getidea(unsigned int num) const
{
    if (num >= 0 && num < 100)
        return (this->ideas[num]);
    else 
        return ("set valid num.");
}

void Brain::setidea(unsigned int num, std::string idea) const
{
    if (num >= 0 && num < 100)
        this->ideas[num] = idea;
    else 
        std::cout << "set valid num." << std::endl;
    return ;
}