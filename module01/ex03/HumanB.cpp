/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:51:05 by okamili           #+#    #+#             */
/*   Updated: 2023/11/09 00:02:02 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->gear = NULL;
}

HumanB::~HumanB(void)
{	
}

void	HumanB::setWeapon(Weapon &gear)
{
	this->gear = &gear;
}

void	HumanB::attack(void)
{
	if (!this->gear)
		std::cout << this->name << " attacks without a weapon\n";
	else
		std::cout << this->name << " attacks with their " << this->gear->getType() << "\n";
}
