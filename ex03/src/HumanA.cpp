/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:07:22 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/14 14:38:19 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->_name = name;
}


HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
}

std::string	HumanA::getName(void)
{
	return (this->_name);
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

std::string	HumanA::getWeapon(void)
{
	return (this->_weapon.getType());
}
