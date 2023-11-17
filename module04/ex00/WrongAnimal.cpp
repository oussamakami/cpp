/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:06:12 by okamili           #+#    #+#             */
/*   Updated: 2023/11/17 11:13:31 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default Constructor\n";
	type = "N/A";
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal type Constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &origin)
{
	std::cout << "WrongAnimal copy Constructor\n";
	type = origin.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &origin)
{
	std::cout << "WrongAnimal operator '=' Constructor\n";
	type = origin.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Animal Deconstructor\n";
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound\n";
}
