/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:27:04 by okamili           #+#    #+#             */
/*   Updated: 2023/11/19 13:40:59 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name) :	ClapTrap(name + "_clap_name"),
													ScavTrap(name),
													FragTrap(name),
													name(name)
{
	std::cout << "DiamondTrap spawning " << name << "\n";
	HP = 100;
	EP = 50;
	AP = 30;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap despawning " << name << "\n";
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << name << "\n";
	std::cout << "DiamondTrap claptrap name: " << ClapTrap::name << "\n";
}
