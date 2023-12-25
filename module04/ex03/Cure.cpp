/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:06:24 by okamili           #+#    #+#             */
/*   Updated: 2023/12/25 11:01:21 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure	&Cure::operator=(const Cure &origin)
{
	(void) origin;
	return (*this);
}

Cure	*Cure::clone(void) const
{
	return (new Cure);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "Cure: \"* heals " << target.getName() << "'s wounds *\"\n";
}
