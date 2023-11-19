/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:35:43 by okamili           #+#    #+#             */
/*   Updated: 2023/11/19 21:32:41 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), stuff(new Brain())
{
	std::cout << "Cat Constructor\n";
}

Cat::Cat(const Cat &origin) : Animal(origin), stuff(new Brain(*origin.stuff))
{
	std::cout << "Cat copy constructor called\n";
}

Cat::~Cat(void)
{
	std::cout << "Cat Deconstructor\n";
	delete stuff;
}

Cat	&Cat::operator=(const Cat &origin)
{
	std::cout << "Cat = operator called\n";
	if (this == &origin)
		return (*this);
	delete stuff;
	stuff = new Brain(*origin.stuff);
	Animal::operator=(origin);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meooow!!\n";
}
