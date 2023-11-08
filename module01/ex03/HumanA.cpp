/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:33:24 by okamili           #+#    #+#             */
/*   Updated: 2023/11/08 23:46:56 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &gear) : gear(gear)
{
	this->name = name;
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
		std::cout << this->name << " attacks with their " << this->gear.getType() << "\n";
}
