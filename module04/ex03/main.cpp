/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 10:51:02 by okamili           #+#    #+#             */
/*   Updated: 2023/12/25 13:42:01 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	Character a("Ricardo");
	Character *b = new Character("john");

	//checking operator= to make sure the copy is deep
	Character c = *b;
	delete b;
	//done checking operator=

	//checking the garbage system in the characters
	for (int i = 0; i < 15; i++)
	{
		a.equip(new Ice());
	}
	a.unequip(8);
	a.unequip(0);
	c.unequip(2);
	a.equip(new Cure());
	//done checking he garbage system

	std::cout << a.getName() << "\n";
	a.use(0, c);
	std::cout << c.getName() << "\n";
	c.use(0, a);
	//done checking characters and materias
	
	MateriaSource	*engineer0 = new MateriaSource();
	MateriaSource	engineer1;
	
	//checking operator= for Materiasource
	engineer0->learnMateria(new Ice());
	engineer0->learnMateria(new Cure());

	engineer1 = *engineer0;
	delete engineer0;

	c.equip(engineer1.createMateria("ice"));
	c.use(0, a);
	//done checking operator= for Materiasource
	return 0;
}
