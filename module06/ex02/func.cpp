/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:55:15 by okamili           #+#    #+#             */
/*   Updated: 2023/12/27 21:33:47 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.hpp"

Base	*generate(void)
{
	std::srand(std::time(0));

	switch (std::rand() % 3)
	{
		case 0:
			std::cout << "Debug: A Gen\n";
			return (new A);
		case 1:
			std::cout << "Debug: B Gen\n";
			return (new B);
		case 2:
			std::cout << "Debug: C Gen\n";
			return (new C);
		default:
			std::cout << "Debug: ERROR RAND\n";
			return (NULL);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Base A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "Base B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "Base C\n";
}

void	identify(Base &p)
{
	try
	{
		Base tmp = dynamic_cast<A &>(p);
		std::cout << "Base A\n";
	}
	catch(const std::exception &err)
	{
		try
		{
			Base tmp = dynamic_cast<B &>(p);
			std::cout << "Base B\n";
		}
		catch (const std::exception &err)
		{
			try
			{
				Base tmp = dynamic_cast<C &>(p);
				std::cout << "Base C\n";
			}
			catch(const std::exception &err)
			{}
		}
	}
}
