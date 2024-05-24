/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 00:57:42 by okamili           #+#    #+#             */
/*   Updated: 2024/05/24 17:03:48 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
	AForm("ShrubberyCreationForm", 145, 137),
	_target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &origin) :
	AForm(origin)
{
	_target = origin._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm &origin)
{
	_target = origin._target;
	return (*this);
}

const char	*ShrubberyCreationForm::FileOperationException::what(void) const throw()
{
	return ("couldn't open/create target file.\n");
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	validateExecutor(executor);

	std::ofstream	file((_target + "_shrubbery").c_str());
	if (!file.is_open())
		throw ShrubberyCreationForm::FileOperationException();
	
	file << std::string(6, ' ') << '^' << "\n";
	file << std::string(5, ' ') << std::string(3, '^') << "\n";
	file << std::string(4, ' ') << std::string(5, '^') << "\n";
	file << std::string(3, ' ') << std::string(7, '^') << "\n";
	file << std::string(2, ' ') << std::string(9, '^') << "\n";
	file << " " << std::string(11, '^') << "\n";
	file << std::string(13, '^') << "\n";
	file << std::string(6, ' ') << "|" << "\n";
	file << std::string(6, ' ') << "|" << "\n";

	file.close();
}
