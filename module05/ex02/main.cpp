/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 04:55:03 by okamili           #+#    #+#             */
/*   Updated: 2023/11/30 13:58:54 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat user1("bob", 26);
		Bureaucrat user2("master", 6);
		ShrubberyCreationForm a("home");
		RobotomyRequestForm b("car");
		PresidentialPardonForm c("Michael Scofield");

		user1.signForm(a);
		user1.signForm(b);
		user1.signForm(c);
		user1.bumpGradeUp();
		user1.signForm(c);
		user2.executeForm(a);
		user2.executeForm(b);
		user2.executeForm(c);
		user2.bumpGradeUp();
		user2.executeForm(c);
	}
	
	catch (const std::exception &eMsg)
	{
		std::cerr << eMsg.what();
	}
	return (0);
}
