/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:05:55 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/10 15:34:50 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
void	randomChump(std::string name)
{
	Zombie	*newZ;

	newZ = newZombie(name);
	newZ->announce();
	delete(newZ);
}
