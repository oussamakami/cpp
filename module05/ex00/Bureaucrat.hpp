/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 03:39:06 by okamili           #+#    #+#             */
/*   Updated: 2023/11/27 05:41:00 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		const std::string	_Name;
		int					_Grade;
	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &origin);
		~Bureaucrat(void);
	
		Bureaucrat			&operator=(const Bureaucrat &origin);
		void				bumpGradeUp(void);
		void				bumpGradeDown(void);
		int					getGrade(void) const;
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
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &data);

/*
throw()
it tells the compiler this function must not throw any exception in any circumstance
its usually used with virtual function so that if the developer wanter to overwrite it
he must make sure the function doesnt throw any exception since it might cause
an undefined behavior 
*/
#endif
