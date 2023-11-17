/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 05:23:29 by okamili           #+#    #+#             */
/*   Updated: 2023/11/17 21:18:02 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl		data;
	int			index = 0;
	std::string	cases[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2)
	{
		std::cerr << "invalid number of arguments\n";
		return (1);
	}

	for (;index < 4; index++)
	{
		if (std::string(argv[1]) == cases[index])
			break;
	}

	switch (index)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			data.complain(argv[1]);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
	return (0);
}
