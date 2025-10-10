/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:53:01 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/10 15:33:46 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main( void )
{
	Zombie	Zombie1;
	Zombie	*Zombie2;
	
	Zombie1.setName("Zombie1");
	Zombie1.announce();

	Zombie2 = newZombie("Zombie2");
	Zombie2->announce();
	
	randomChump("Zombie3");
	delete(Zombie2);
	return (0);
}