/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 07:13:57 by okamili           #+#    #+#             */
/*   Updated: 2023/11/27 08:17:36 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_Name;
		const int			_GradeToSign;
		const int			_GradeToExec;
		bool				_Signed;
		
	public:
		Form(const std::string name, int gradeToSign, int gradeToExec);
		Form(const Form &origin);
		~Form(void);
	
		Form				&operator=(const Form &origin);
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
		
		void				beSigned(const Bureaucrat &person);
};

std::ostream &operator<<(std::ostream &out, const Form &data);

#endif