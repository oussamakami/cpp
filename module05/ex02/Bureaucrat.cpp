/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 04:48:55 by okamili           #+#    #+#             */
/*   Updated: 2023/11/30 07:52:47 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _Name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &origin) : _Name(origin._Name), _Grade(origin._Grade)
{	
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &origin)
{
	this->_Grade = origin._Grade;

	return (*this);
}

const std::string	Bureaucrat::getName(void) const
{
	return (_Name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_Grade);
}

void	Bureaucrat::bumpGradeUp(void) 
{
	if (_Grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	_Grade--;
}

void	Bureaucrat::bumpGradeDown(void) 
{
	if (_Grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	_Grade++;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Please Relax, Your Grade is Too High!\n");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Be Gentle On YourSelf, Your Grade is Too Low!\n");
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &data)
{
	out << data.getName() << ", Bureaucrat grade " << data.getGrade() << std::endl;
	return (out);
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_Name << " signed " << form.getName() << "\n";
	}
	catch (const std::exception &eMsg)
	{
		std::cout << this->_Name << " couldn't sign " << form.getName();
		std::cout << " because " << eMsg.what();
	}
}

void	Bureaucrat::executeForm(const AForm &form) const
{
	try
	{
		form.execute(*this);
	}
	catch (const std::exception &eMsg)
	{
		std::cerr << "Error: " << _Name << " couldnt sign the form because " << eMsg.what();
	}
}
