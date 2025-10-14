/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:47:23 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/14 14:38:40 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(void);
	Weapon(std::string str);
	~Weapon();
	const std::string & getType();
	void	setType(std::string str);
};
