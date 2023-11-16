/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:42:12 by okamili           #+#    #+#             */
/*   Updated: 2023/11/13 19:44:41 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Constructor\n";
	type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog Deconstructor\n";
}

void	Dog::makeSound(void) const
{
	std::cout << "woof woof\n";
}
