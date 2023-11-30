/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 07:22:05 by okamili           #+#    #+#             */
/*   Updated: 2023/11/30 07:40:44 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string name, int gToSign, int gToExec) :
	_Name(name),
	_GradeToSign(gToSign),
	_GradeToExec(gToExec),
	_Signed(false)
{
	if (gToSign > 150 || gToExec > 150)
		throw AForm::GradeTooLowException();
	if (gToSign < 1 || gToExec < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &origin) : 
	_Name(origin._Name),
	_GradeToSign(origin._GradeToSign),
	_GradeToExec(origin._GradeToExec),
	_Signed(origin._Signed)
{
}

AForm::~AForm(void)
{
}

AForm	&AForm::operator=(const AForm &origin)
{
	_Signed = origin._Signed;
	return (*this);
}

int		AForm::getSignGrade(void) const
{
	return (_GradeToSign);
}

int		AForm::getExecGrade(void) const
{
	return (_GradeToExec);
}

bool	AForm::isSigned(void) const
{
	return (_Signed);
}

const std::string	AForm::getName(void) const
{
	return (_Name);
}

const char * AForm::GradeTooHighException::what() const throw()
{
	return ("Form: Grade is Too High!\n");
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return ("Form: Grade is Too Low!\n");
}

const char * AForm::UnsignedFormException::what() const throw()
{
	return ("Form: exception Form must be signed!\n");
}

std::ostream	&operator<<(std::ostream &out, const AForm &data)
{
	out << "Form Name: " << data.getName() << "\n";
	out << "Form grade to sign: " << data.getSignGrade() << "\n";
	out << "Form grade to exec: " << data.getExecGrade() << "\n";
	out << "Form sign status: " << (data.isSigned() ? "true" : "false") << "\n";
	return (out);
}

void	AForm::beSigned(const Bureaucrat &person)
{
	if (person.getGrade() > _GradeToSign)
		throw AForm::GradeTooLowException();
	_Signed = true;
}

void	AForm::validateExecutor(const Bureaucrat &executor) const
{
	if (!this->isSigned())
		throw AForm::UnsignedFormException();
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
}
