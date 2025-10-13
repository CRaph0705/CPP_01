/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:48:45 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/13 11:39:30 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#define DEFAULT_N 4
#define DEFAULT_NAME "default"
int	main(int ac, char **av)
{
	Zombie *horde = NULL;
	std::string name;
	int N;

	N = DEFAULT_N;
	name = DEFAULT_NAME;
	if (ac >= 3)
	{
		N = std::atoi(av[1]);
		name = av[2];
	}
	
	horde = zombieHorde(N, name);

	int i = 0;
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	
	delete [] horde;
	return (0);
}
