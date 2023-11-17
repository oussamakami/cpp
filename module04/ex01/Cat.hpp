/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:33:52 by okamili           #+#    #+#             */
/*   Updated: 2023/11/17 19:03:06 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*stuff; 
	public:
		Cat(void);
		Cat(const Cat &origin);
		~Cat(void);
		Cat &operator=(const Cat &origin);
		void	makeSound(void) const;
};

#endif
