/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:57:46 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/13 10:57:04 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class	Zombie
{
private :
	std::string name;
	
public :
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
	std::string	getName(void);
	void	setName(std::string name);
} ;
