/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 04:55:03 by okamili           #+#    #+#             */
/*   Updated: 2023/11/27 08:21:10 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	a("tom", 50);
		Form		elem("Form#00", 49, 123);

		std::cout << a << "\n" << elem << "\n";

		a.signForm(elem);
		a.bumpGradeUp();
		std::cout << "\n";
		a.signForm(elem);
		
		std::cout << "\n" << elem;
	}
	catch (const std::exception &eMsg)
	{
		std::cout << eMsg.what();
	}
	return (0);
}
