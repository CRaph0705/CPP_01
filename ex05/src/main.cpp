/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:47:06 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/17 14:46:55 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int	main( void )
{
	Harl harl;
	// std::string input;

	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("INFO");
	harl.complain("DEBUG");
	// while (1)
	// {
	// 	std::cout << "Usage : ERROR || WARNING || INFO || DEBUG";
	// 	if (!getline(std::cin, input))
	// 	{
	// 		return (1);	
	// 	}
	// 	if (input == "EXIT")
	// 		break ;
	// 	harl.complain(input);
	// 	std::cout << std::endl;
	// }
	return (0);	
}
