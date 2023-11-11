/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 05:37:04 by okamili           #+#    #+#             */
/*   Updated: 2023/11/11 07:34:58 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " has become a Scav\n";
	this->HP = 100;
	this->EP = 50;
	this->AP = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << name << " is no longer a Scav\n";
}

void	ScavTrap::attack(const std::string &target)
{
	if (!HP || !EP)
	{
		std::cout << name << "ScavTrap " << name << " cant attack since he ";
		if (!HP)
			std::cout << "is dead!\n";
		else
			std::cout << "has no energy!\n";
		return ;
	}
	EP--;
	std::cout << "ScavTrap " << name << " attacks " << target << " causing ";
	std::cout << AP << " points of damage!\n";
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode.\n";
}
