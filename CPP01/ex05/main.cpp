/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razasharuku <razasharuku@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:31:52 by razasharuku       #+#    #+#             */
/*   Updated: 2023/12/09 20:34:20 by razasharuku      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	create_replaced_file(const std::string &filename, const std::string &to_find, const std::string &be_replace)
{
	std::string				line;
	std::string::size_type	found_index;
	std::ifstream 			inputFile(filename.c_str());
	if (!inputFile)
	{
		std::cerr << "Error :" << filename.c_str() << " couldn't open." << std::endl;
		return ;
	}
	std::ofstream 			outputFile((filename + ".replace").c_str());
	if (!outputFile)
	{
		std::cerr << "Error :" << (filename + ".replace").c_str() << "couldn't make outputFile." << std::endl;
		inputFile.close();
		return ;
	}
	
	while (std::getline(inputFile, line))
	{
		found_index = line.find(to_find.c_str());
		if (found_index != std::string::npos)
		{
			outputFile << line.substr(0,found_index) << be_replace << line.substr(found_index + to_find.length());
		}
		else 
			outputFile << line;
		if (!inputFile.eof())
			outputFile << std::endl;
	}
	inputFile.close();
	outputFile.close();
	return ;
}

// int main(void)
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Useage: " << argv[0] << "<filename> <s1> <s2>" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string to_find = argv[2];
	std::string be_replace = argv[3];

	create_replaced_file(filename, to_find, be_replace);

	return (0);
}




// __attribute__((destructor))
// static void destructor() 
// {
//     system("leaks -q ex04");
// }