/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:35:43 by okamili           #+#    #+#             */
/*   Updated: 2023/11/17 10:20:27 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Constructor\n";
	type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat Deconstructor\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "Meooow!!\n";
}
