/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:19:45 by okamili           #+#    #+#             */
/*   Updated: 2023/11/17 11:36:23 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &origin);
		Animal	&operator=(const Animal &origin);
		virtual ~Animal(void);
		virtual void	makeSound(void) const;
		std::string	getType(void) const;
};

#endif
