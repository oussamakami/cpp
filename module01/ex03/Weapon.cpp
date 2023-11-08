/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 00:32:43 by okamili           #+#    #+#             */
/*   Updated: 2023/11/08 23:42:00 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
}

Weapon::~Weapon(void)
{}

const std::string &Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}
