

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>



int main(void)
{
    int i = 0;

	std::cout << "|0123456789|0123456789|0123456789|0123456789|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|**********|**********|**********|**********|" << std::endl;
 	std::cout <<  "|";
 	std::cout << std::setw(10) << i <<  "|";
 	std::cout << std::setw(10) << "raza" <<  "|";
 	std::cout << std::setw(10) << "sharuku" <<  "|";
 	std::cout << std::setw(10) << "sharukukuku" <<  "|" << std::endl;

	return (0);
}