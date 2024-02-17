/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 09:44:57 by razasharuku       #+#    #+#             */
/*   Updated: 2024/02/17 20:12:32 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    {
        std::cout << "\033[1;34m" << "++++++++++++++++++ TEST 1 _START ++++++++++++++++++++\n" << "\033[0m" << std::endl;
        Animal* animals[5];

        int i = 0;
        while (i < 5)
        {
            std::cout << "\033[1;36m" << i + 1 << ".  |------------Contructors-----------------|" << "\033[0m" << std::endl;
            if (i % 2 == 0)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
            std::cout << "\033[1;36m" << i + 1 << ".  |------------Contructors-----------------|\n" << "\033[0m" << std::endl;
            i++;
        }
        std::cout << "\033[1;34m" << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n" << "\033[0m" << std::endl;

        std::cout << std::endl;

        i = 0;
        while ( i < 5)
        {
            std::cout << i + 1 << ".  This is a " << animals[i]->getType() << std::endl;
            animals[i]->makeSound();
            std::cout << std::endl;
            std::cout << "\033[1;31m" << "|------------Destructors-----------------|" << "\033[0m" << std::endl;
            delete animals[i];
            std::cout << "\033[1;31m" << "|------------Destructors-----------------|" << "\033[0m" << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            i++;
        }
        std::cout << "\033[1;34m" << "++++++++++++++++++ TEST 1 _END ++++++++++++++++++++\n" << "\033[0m" << std::endl;
    }



    {
        std::cout << "\033[1;34m" << "++++++++++++++++++ TEST 2 _START(Copy check) ++++++++++++++++++++\n" << "\033[0m" << std::endl;
		Cat cat;
		Cat new_cat(cat);
		
		std::cout << std::endl;

		std::cout << "before :Cat's 100th idea:          " << cat.getidea(99) << std::endl;
		cat.setidea(99, "amazing new idea_100");
		std::cout << "after  :Cat's 100th idea:          " << cat.getidea(99) << std::endl;

		std::cout << "        New_Cat's 100th idea:      " << new_cat.getidea(99) << std::endl;

        std::cout << std::endl;

        std::cout << "\033[1;34m" << "++++++++++++++++++ TEST 2 _END(Copy check) ++++++++++++++++++++\n" << "\033[0m" << std::endl;

    }

    {
        std::cout << "\033[1;31m" << "++++++++++++++++++ TEST 3 _START(Copy assignment check) ++++++++++++++++++++\n" << "\033[0m" << std::endl;
        Dog basic;
        {
            std::cout << "\033[1;31m" << "++++++++++++++++++ TEST 3 _START(Copy assignment check) ++++++++++++++++++++\n" << "\033[0m" << std::endl;
            Dog tmp = basic;
            std::cout << "\033[1;31m" << "++++++++++++++++++ TEST 3 _END(Copy assignment check) ++++++++++++++++++++\n" << "\033[0m" << std::endl;
        }

        std::cout << "\033[1;33m" << "++++++++++++++++++ TEST 4 _START(Copy assignment check) ++++++++++++++++++++\n" << "\033[0m" << std::endl;

		Dog dog;
		Dog copy_Dog = dog;
		
		std::cout << std::endl;

		std::cout << "before :Dog's 100th idea:          " << dog.getidea(99) << std::endl;
		dog.setidea(99, "amazing new idea_100");
		std::cout << "after  :Dog's 100th idea:          " << dog.getidea(99) << std::endl;

		std::cout << "        New_Dog's 100th idea:      " << copy_Dog.getidea(99) << std::endl;
        std::cout << "\n Change New_dog's Value\n" <<std::endl;

		copy_Dog.setidea(99, "Wonderful new idea_100");
		std::cout << "        dog's 100th idea:          " << dog.getidea(99) << std::endl;
		std::cout << "        New_Dog's 100th idea:      " << copy_Dog.getidea(99) << std::endl;


        std::cout << "\033[1;33m" << "++++++++++++++++++ TEST 3 _END(Copy assignment check) ++++++++++++++++++++\n" << "\033[0m" << std::endl;

    }


    return 0;
}

__attribute__((destructor))
void destructor()
{
    system("leaks -q ex");
}