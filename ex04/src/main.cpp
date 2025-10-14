/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:44:23 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/14 16:07:25 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

void	search_and_replace(std::string filename, std::string string1, std::string string2)
{
	std::cout << "filename = " << filename;
	std::cout << std::endl;
	std::cout << "string1 = " << string1;
	std::cout << std::endl;
	std::cout << "string2 = " << string2;
	std::cout << std::endl;

	// input infile

	// create outfile <infile>.replace
	// track s1
	// append in outfile
	
}


int	main (int ac, char **av)
{

	std::string filename, string1, string2;
	
	if (ac != 4)
	{
		std::cout << "Usage : ./<ex> <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	filename = av[1];
	string1 = av[2];
	string2 = av[3];
	search_and_replace(filename, string1, string2);
	return (0);
}