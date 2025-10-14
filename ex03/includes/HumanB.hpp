/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:47:20 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/14 15:32:20 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;
public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon &weapon);
	~HumanB();

	void	setName(std::string name);
	std::string	getName(void);
	
	void	setWeapon(Weapon &weapon);
	std::string	getWeapon(void);

	void	attack();
};

