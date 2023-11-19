/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 05:07:26 by okamili           #+#    #+#             */
/*   Updated: 2023/11/19 13:46:53 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("john");

	std::cout << std::string(80, '=') << "\n";
	std::cout << "testing the attack function:\n\n";
	a.attack("whatever...");
	std::cout << std::string(80, '=') << "\n";
	std::cout << "testing the whoami function:\n\n";
	a.whoAmI();
	std::cout << std::string(80, '=') << "\n";

	return (0);
}
