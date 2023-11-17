/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:37:24 by okamili           #+#    #+#             */
/*   Updated: 2023/11/17 19:22:16 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*stuff;
	public:
		Dog(void);
		Dog(const Dog &origin);
		~Dog(void);
		Dog &operator=(const Dog &origin);
		void	makeSound(void) const;
};

#endif
