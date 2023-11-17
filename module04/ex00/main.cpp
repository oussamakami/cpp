/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:45:47 by okamili           #+#    #+#             */
/*   Updated: 2023/11/17 11:43:30 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal	*meta = new Animal();
	const Animal	*i = new Cat();
	const Animal	*j = new Dog();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	std::cout << std::string(80, '=') << std::endl;

	const WrongAnimal	*a = new WrongAnimal();
	const WrongAnimal	*b = new WrongCat();

	std::cout << a->getType() << " " << std::endl;
	std::cout << b->getType() << " " << std::endl;
	a->makeSound();
	b->makeSound();

	delete a;
	delete b;

	std::cout << std::string(80, '=') << std::endl;

	WrongCat z;
	WrongAnimal *holder;

	std::cout << z.getType() << " " << std::endl;
	z.makeSound();
	holder = &z;
	holder->makeSound();
	return (0);
}
