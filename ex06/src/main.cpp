/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:20:57 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/17 15:38:43 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	Harl	harl;
	if (ac !=2)
	{
		std::cout << "Usage <./harlFilter <level>" << std::endl;
		std::cout << "Levels : DEBUG || INFO || WARNING || ERROR" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}
