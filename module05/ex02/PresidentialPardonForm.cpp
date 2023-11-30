/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 02:24:14 by okamili           #+#    #+#             */
/*   Updated: 2023/11/30 07:41:03 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
	AForm("PresidentialPardonForm", 25, 5),
	_target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &origin) :
	AForm(origin)
{
	_target = origin._target;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	validateExecutor(executor);

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
}
