/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 05:07:26 by okamili           #+#    #+#             */
/*   Updated: 2023/11/11 08:10:10 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap p1("ricardo");
	ClapTrap p2("johncena");
	ScavTrap s1("thanos");
	FragTrap z1("temp");
	FragTrap z2(FragTrap("3ebas"));

	z1 = z2;

	std::cout << "\n\tricardo: Cena its time for you to die!\n\n";
	p1.attack("johncena");
	p2.takeDamage(0);
	p2.beRepaired(0);
	std::cout << "\n\tjohncena: Ricardo how did you see me?!\n";
	std::cout << "\tjohncena: Well it doesnt matter now, you have to disapear... no one should be able to see me\n\n";
	p2.attack("ricardo");
	std::cout << "\n\tricardo: you call that an attack Cena\n";
	std::cout << "\tjohncena: just wait and see.\n\n";
	p1.takeDamage(20);
	p1.beRepaired(10);
	std::cout << "\n\tjohncena: just like how nature intended\n";
	std::cout << "\tthanos: ...!\n";
	s1.attack("johncena");
	p2.takeDamage(5);
	s1.beRepaired(5);
	std::cout << "\n\tthanos: my attack takes half of you HP point and gives it to me!!\n\n";
	s1.guardGate();
	z1.attack("thanos");
	s1.takeDamage(30);
	z1.beRepaired(50);
	z1.highFivesGuys();
	return (0);
}
