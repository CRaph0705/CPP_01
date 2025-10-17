/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:20:53 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/17 15:32:49 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"
#define DEBUG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" 
#define INFO_MSG "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
#define WARNING_MSG "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month."
#define ERROR_MSG "This is unacceptable! I want to speak to the manager now."

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << DEBUG_MSG << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << INFO_MSG << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << WARNING_MSG << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << ERROR_MSG << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	std::cout << "level : " << level << std::endl;
	std::string options[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*functions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;

	for (i; i < 4; i++)
	{
		if (options[i] == level)
		{
			(this->*functions[i])();
			break ;
		}
		(this->*functions[i])();
	}
	return ;
}
