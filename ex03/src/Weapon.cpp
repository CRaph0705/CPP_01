/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:07:16 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/14 13:56:48 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string str)
{
	this->_type = str;
}

const std::string & Weapon::getType()
{
	return (this->_type);
}

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string str)
{
	this->_type = str;
}

Weapon::~Weapon()
{
}