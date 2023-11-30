/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:06:34 by okamili           #+#    #+#             */
/*   Updated: 2023/11/30 15:13:56 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(const Intern &origin)
{
	(void) origin;
}

Intern::~Intern(void)
{
}

Intern &Intern::operator=(const Intern &origin)
{
	(void) origin;

	return (*this);
}

AForm	*Intern::makeForm(const std::string formName, const std::string formTarget)
{
	AForm	*forms[3] = {	new ShrubberyCreationForm(formTarget),
							new RobotomyRequestForm(formTarget),
							new PresidentialPardonForm(formTarget)
						};
	std::string Names[3] = {	"shrubbery creation",
								"robotomy request",
								"presidential pardon"
							};
	int	index = -1;
	
	for (int i = 0; i < 3; i++)
	{
		if (formName == Names[i])
			index = i;
		else
			delete forms[i];
	}
	if (index != -1)
	{
		std::cout << "Intern creates " << Names[index] << "\n";
		return (forms[index]);
	}
	std::cout << "Intern couldnt create the form\n";
	return (NULL);
}
