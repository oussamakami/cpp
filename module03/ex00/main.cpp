/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 05:07:26 by okamili           #+#    #+#             */
/*   Updated: 2023/11/11 05:19:52 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap p1("ricardo");
	ClapTrap p2("johncena");


	std::cout << "\n\tricardo: its time for you to die!\n\n";
	p1.attack("johncena");
	p2.takeDamage(0);
	std::cout << "\n\tjohncena: you cant see me!!\n\n";
	p2.beRepaired(0);
	p2.attack("ricardo");
	std::cout << "\n\tricardo: you call that an attack!\n";
	std::cout << "\tjohncena: just wait and see.\n\n";
	p1.takeDamage(20);
	p1.beRepaired(10);
	std::cout << "\n\tjohncena: 8)\n\n";
	return (0);
}
