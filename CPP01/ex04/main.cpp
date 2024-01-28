/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:31:52 by razasharuku       #+#    #+#             */
/*   Updated: 2024/01/27 16:35:56 by sraza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	create_replaced_file(const std::string &filename, const std::string &to_find, const std::string &be_replace)
{
	std::string				line;
	std::string				new_line;
	std::string::size_type	last_found_pos = 0;
	std::string::size_type	found_index;
	std::ifstream 			inputFile(filename.c_str());
	std::ofstream 			outputFile((filename + ".replace").c_str());

	if (!inputFile)
	{
		std::cerr << "Error :" << filename.c_str() << " couldn't open." << std::endl;
		return ;
	}
	if (!outputFile)
	{
		std::cerr << "Error :" << (filename + ".replace").c_str() << "couldn't make outputFile." << std::endl;
		inputFile.close();
		return ;
	}

	while (std::getline(inputFile, line))
	{
		new_line.clear();
		found_index = (line).find(to_find);
		last_found_pos = 0;
		if (found_index != std::string::npos)
		{
			while (found_index != std::string::npos)
			{
				new_line.append(line, last_found_pos, found_index - last_found_pos);
				new_line += be_replace;
				last_found_pos = found_index + to_find.length();
				found_index = line.find(to_find, last_found_pos);
				if (found_index == std::string::npos)
					new_line.append(line, last_found_pos, line.length());
			}
		}
		else 
			new_line = line;
		if (!inputFile.eof())
			outputFile << new_line << std::endl;
		else 
			outputFile << new_line;
	}
	inputFile.close();
	outputFile.close();
	return ;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Useage: " << argv[0] << "<filename> <s1> <s2>" << std::endl;
		return (1);
	}
	if (argv[2][0] == '\0')
	{
		std::cout << "You can't set null for search value." << std::endl;
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