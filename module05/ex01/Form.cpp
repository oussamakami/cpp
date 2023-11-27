/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 07:22:05 by okamili           #+#    #+#             */
/*   Updated: 2023/11/27 08:19:00 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, int gToSign, int gToExec) :
	_Name(name),
	_GradeToSign(gToSign),
	_GradeToExec(gToExec),
	_Signed(false)
{
	if (gToSign > 150 || gToExec > 150)
		throw Form::GradeTooLowException();
	if (gToSign < 1 || gToExec < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &origin) : 
	_Name(origin._Name),
	_GradeToSign(origin._GradeToSign),
	_GradeToExec(origin._GradeToExec),
	_Signed(origin._Signed)
{
}

Form::~Form(void)
{
}

Form	&Form::operator=(const Form &origin)
{
	_Signed = origin._Signed;
	return (*this);
}

int		Form::getSignGrade(void) const
{
	return (_GradeToSign);
}

int		Form::getExecGrade(void) const
{
	return (_GradeToExec);
}

bool	Form::isSigned(void) const
{
	return (_Signed);
}

const std::string	Form::getName(void) const
{
	return (_Name);
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Form: Grade is Too High!\n");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Form: Grade is Too Low!\n");
}

std::ostream	&operator<<(std::ostream &out, const Form &data)
{
	out << "Form Name: " << data.getName() << "\n";
	out << "Form grade to sign: " << data.getSignGrade() << "\n";
	out << "Form grade to exec: " << data.getExecGrade() << "\n";
	out << "Form sign status: " << (data.isSigned() ? "true" : "false") << "\n";
	return (out);
}

void	Form::beSigned(const Bureaucrat &person)
{
	if (person.getGrade() > _GradeToSign)
		throw Form::GradeTooLowException();
	_Signed = true;
}
