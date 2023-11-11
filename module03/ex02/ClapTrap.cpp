/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 04:12:01 by okamili           #+#    #+#             */
/*   Updated: 2023/11/11 05:12:28 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name)
{
	std::cout << "ClapTrap spawning " << name << "\n";
	this->name = name;
	this->HP = 10;
	this->EP = 10;
	this->AP = 0;
}

ClapTrap::ClapTrap(const ClapTrap &tocopy)
{
	std::cout << "Claptrap Constructor copying " << tocopy.name << " Data\n";
	*this = tocopy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap despawning " << name << "\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &tocopy)
{
	std::cout << "Claptrap operator copying " << tocopy.name << " Data\n";
	this->name = tocopy.name;
	this->HP = tocopy.HP;
	this->EP = tocopy.EP;
	this->AP = tocopy.AP;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (!HP || !EP)
	{
		std::cout << name << "Claptrap " << name << " cant attack since he ";
		if (!HP)
			std::cout << "is dead!\n";
		else
			std::cout << "has no energy!\n";
		return ;
	}
	EP--;
	std::cout << "Claptrap " << name << " attacks " << target << " causing ";
	std::cout << AP << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= HP)
		HP = 0;
	else
		HP -= amount;

	if (!HP)
		std::cout << "ClapTrap " << name << " is dead\n";
	else
		std::cout << "ClapTrap " << name << " lost " << amount << " HP because of the attack damage!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!HP || !EP)
	{
		std::cout << "ClapTrap " << name << " cant repaire itself since he ";
		if (!HP)
			std::cout << "is dead!\n";
		else
			std::cout << "has no energy!\n";
		return ;
	}
	EP--;
	HP += amount;
	std::cout << "ClapTrap " << name << " has recovered " << amount << " HP\n";
}
