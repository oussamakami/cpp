/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:25:20 by okamili           #+#    #+#             */
/*   Updated: 2023/11/13 19:33:32 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	type = "N/A";
	std::cout << "Animal default Constructor\n";
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal type Constructor\n";
}

Animal::Animal(const Animal &origin)
{
	std::cout << "Animal copy Constructor\n";
	*this = origin;
}

Animal	&Animal::operator=(const Animal &origin)
{
	std::cout << "Animal operator '=' Constructor\n";
	type = origin.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal Deconstructor\n";
}

std::string	Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound\n";	
}
