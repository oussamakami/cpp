/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 02:20:39 by okamili           #+#    #+#             */
/*   Updated: 2024/05/24 17:04:11 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
	AForm("RobotomyRequestForm", 72, 45),
	_target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &origin) :
	AForm(origin)
{
	_target = origin._target;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm &origin)
{
	_target = origin._target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	validateExecutor(executor);
	
	srand(time(NULL));
	std::cout << "rrrRRRRr...BZZZZzZZ..\n";
	if (!(rand() % 2))
		std::cout << _target << " has been robotomized successfull.\n";
	else
		std::cout << "Regrettably, robotomy has been unsuccessful.\n";
}
