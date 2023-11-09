/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 05:07:34 by okamili           #+#    #+#             */
/*   Updated: 2023/11/09 06:37:13 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "Harl debug called\n";
}

void	Harl::info(void)
{
	std::cout << "Harl info called\n";
}

void	Harl::warning(void)
{
	std::cout << "Harl warning called\n";
}

void	Harl::error(void)
{
	std::cout << "Harl error called\n";
}

void	Harl::complain(std::string level)
{
	void		(Harl::*actions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			index = -1;

	while (++index < names->length())
	{
		if (names[index] == level)
			(this->*actions[index])();
	}
}
