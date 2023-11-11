/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 07:52:56 by okamili           #+#    #+#             */
/*   Updated: 2023/11/11 08:02:22 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " has become a Frag\n";
	this->HP = 100;
	this->EP = 100;
	this->AP = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << name << " is no longer a Frag\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " request a high five\n";
}
