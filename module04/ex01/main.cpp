/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:45:47 by okamili           #+#    #+#             */
/*   Updated: 2023/11/17 19:35:49 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *animals[4] = {new Dog(), new Cat(), new Dog(), new Cat()};
	
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}

	std::cout << std::string(80, '=') << std::endl;

	Dog *a = new Dog();
	Dog *b = new Dog();
	
	*b = *a;
	delete a;
	std::cout << b->getType() << std::endl;
	delete b;
	return (0);
}
