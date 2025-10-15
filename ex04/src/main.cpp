/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:44:23 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/15 17:55:17 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

void	search_and_replace(std::string string1, std::string string2, std::string stash, std::ofstream &outfile);

void	search_and_replace(std::string string1, std::string string2, std::string stash, std::ofstream &outfile)
{
	(void)outfile;
	(void)string2;
	std::size_t found;
	found = stash.find(string1);
	if (found!=std::string::npos)
		std::cout << "found !" << found << '\n';
	else
		std::cout << "not found :(" << '\n';
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
	infile.open(filename);
	if (!infile.good())
	{
		std::cout << "infile not good" << std::endl;
		return (1);
	}
	std::cout << "infile good" << std::endl;

	outfile.open(filename + ".replace");
	if (!outfile.good())
	{
		infile.close();
		std::cout << "outfile not good" << std::endl;
		return (1);
	}
	std::cout << "outfile good" << std::endl;
	// check if infile exists

	// call search_and_replace
	while (getline(infile, stash))
		search_and_replace(string1, string2, stash, outfile);

	infile.close();
	outfile.close();
	return (0);
}