/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:42:12 by okamili           #+#    #+#             */
/*   Updated: 2023/11/17 19:23:44 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), stuff(new Brain())
{
	std::cout << "Dog Constructor\n";
}

Dog::Dog(const Dog &origin) : Animal(origin), stuff(new Brain(*origin.stuff))
{
	std::cout << "Dog copy constructor called\n";
}

Dog::~Dog(void)
{
	std::cout << "Dog Deconstructor\n";
	delete stuff;
}

Dog	&Dog::operator=(const Dog &origin)
{
	std::cout << "Dog = operator called\n";
	if (this == &origin)
		return (*this);
	delete stuff;
	stuff = new Brain(*origin.stuff);
	Animal::operator=(origin);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "woof woof\n";
}
