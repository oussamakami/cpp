/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:48:55 by okamili           #+#    #+#             */
/*   Updated: 2023/11/05 05:56:24 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zik1("foo");
	zik1.announce();

	Zombie *zik2 = newZombie("bar");
	zik2->announce();
	delete zik2;

	randomChump("john");

	return (0);
}
