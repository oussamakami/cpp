/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:27:53 by okamili           #+#    #+#             */
/*   Updated: 2023/11/17 18:59:43 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain class constructed.\n";	
}

Brain::Brain(const Brain &origin)
{
	std::cout << "Brain copy constructor called.\n";
	*this = origin;
}

Brain::~Brain(void)
{
	std::cout << "Brain class deconstructed.\n";
}

Brain &Brain::operator=(const Brain &origin)
{
	std::cout << "Brain = operator called.\n";
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = origin.ideas[i];
	}
	return (*this);
}
