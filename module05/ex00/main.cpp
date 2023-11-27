/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 04:55:03 by okamili           #+#    #+#             */
/*   Updated: 2023/11/27 05:43:15 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("tom", 150);
		Bureaucrat b(a);
		Bureaucrat c("john", 3);
		
		std::cout << a;
		std::cout << b;
		std::cout << c << "\n";
		
		b = c;
		
		std::cout << a;
		std::cout << b;
		std::cout << c << "\n";
		
		b.bumpGradeDown();
		b.bumpGradeDown();
		c.bumpGradeUp();
		c.bumpGradeUp();
		
		std::cout << a;
		std::cout << b;
		std::cout << c << "\n";
		
		std::cout << "throwing a high grade exception for " << c.getName() << "\n";
		c.bumpGradeUp();
		
		std::cout << a;
		std::cout << b;
		std::cout << c;
	}
	catch (const std::exception &eMsg)
	{
		std::cout << eMsg.what();
	}
	return (0);
}
