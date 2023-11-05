/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 06:22:24 by okamili           #+#    #+#             */
/*   Updated: 2023/11/05 06:32:49 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int		hordePop = 5;
	Zombie	*horde = zombieHorde(hordePop, "john");

	for (int i = 0; i < hordePop; i++)
		horde[i].announce();
	
	delete [] horde;

	return (0);
}
