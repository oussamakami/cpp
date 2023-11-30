/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 07:13:57 by okamili           #+#    #+#             */
/*   Updated: 2023/11/30 07:39:48 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_Name;
		const int			_GradeToSign;
		const int			_GradeToExec;
		bool				_Signed;
		
	public:
		AForm(const std::string name, int gradeToSign, int gradeToExec);
		AForm(const AForm &origin);
		virtual ~AForm(void);
	
		AForm				&operator=(const AForm &origin);
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		bool				isSigned(void) const;
		const std::string	getName(void) const;
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class UnsignedFormException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		
		void			beSigned(const Bureaucrat &person);
		virtual void	execute(Bureaucrat const &executor) const = 0;
		void			validateExecutor(const Bureaucrat &executor) const;
};

std::ostream &operator<<(std::ostream &out, const AForm &data);

#endif