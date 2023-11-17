/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:17:23 by okamili           #+#    #+#             */
/*   Updated: 2023/11/17 11:30:51 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat Constructor\n";
	type = "lion";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Deconstructor\n";
}

void	WrongCat::makeSound(void) const
{
	std::cout << "roooaar!!\n";
}
