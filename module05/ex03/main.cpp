/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 04:55:03 by okamili           #+#    #+#             */
/*   Updated: 2023/11/30 15:14:14 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat user2("master", 6);
		Intern	tmp;
		AForm *form;

		form = tmp.makeForm("doesnt exist", "...");
		form = tmp.makeForm("presidential pardon", "Michael Scofield");

		user2.signForm(*form);
		user2.executeForm(*form);
		user2.bumpGradeUp();
		user2.executeForm(*form);
		
		delete form;
	}
	
	catch (const std::exception &eMsg)
	{
		std::cerr << eMsg.what();
	}
	return (0);
}
