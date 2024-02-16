/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 09:44:57 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/16 11:38:25 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const WrongAnimal* W_animal = new WrongAnimal();
    const WrongAnimal* W_cat = new WrongCat();

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n" << std::endl;

    std::cout << "#######################################################\n" << std::endl;
    std::cout << W_animal->getType() << " " << std::endl;
    std::cout << W_cat->getType() << " " << std::endl;

    W_animal->makeSound();
    W_cat->makeSound();

    std::cout << "\n#######################################################\n" << std::endl;

    delete j;
    delete i;
    delete meta;
    delete W_cat;
    delete W_animal;
    return 0;
}