/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:44:23 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/17 10:37:59 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>

void	search_and_replace(std::string string1, std::string string2, std::string stash, std::ofstream &outfile);

void	search_and_replace(std::string string1, std::string string2, std::string stash, std::ofstream &outfile)
{
	std::size_t found, next_step;
	found = stash.find(string1);
	if (found!=std::string::npos)
	{
		// std::cout << "found !" << found << '\n';
		outfile << stash.substr(0, found);
		outfile << string2;
		
		next_step = found + string1.length();
		return (search_and_replace(string1, string2, stash.substr(next_step), outfile));
	}
	else
	{
		// std::cout << "not found :(" << '\n';
		outfile << stash;
		return ;
	}
}


int	main (int ac, char **av)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string filename, string1, string2, stash;
	
	if (ac != 4)
	{
		std::cout << "Usage : ./<ex> <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	filename = av[1];
	string1 = av[2];
	string2 = av[3];

	if (string1.empty() || string2.empty())
	{
		std::cout << "Error, arguments cannot be empty." << std::endl;
		return (1);
	}
	if (!infile || filename.empty())
	{
		std::cout << "Error, file " << filename << " does not exist." << std::endl;
		return (1);
	}
	infile.open(filename.c_str());
	if (!infile.good())
	{
		// std::cout << "infile not good" << std::endl;
		return (1);
	}
	// std::cout << "infile good" << std::endl;

	outfile.open((filename + ".replace").c_str());
	if (!outfile.good())
	{
		infile.close();
		// std::cout << "outfile not good" << std::endl;
		return (1);
	}
	// std::cout << "outfile good" << std::endl;

	while (getline(infile, stash))
		search_and_replace(string1, string2, stash + "\n", outfile);

	infile.close();
	outfile.close();
	return (0);
}