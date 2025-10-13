/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:47:26 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/13 13:27:06 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main ( void )
{
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string	& stringREF = str;

	std::cout << "memory adress of the string variable : " << &str << std::endl;
	std::cout << "memory adress held by stringPTR : " << stringPTR << std::endl;
	std::cout << "memory adress held by stringREF : " << &stringREF << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "value of the string variable : " << str << std::endl;
	std::cout << "value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF : " << stringREF << std::endl;
	
	return (0);
}