/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:07:41 by okamili           #+#    #+#             */
/*   Updated: 2023/12/25 11:08:22 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual 					~ICharacter(void) {};
		virtual const std::string	&getName(void) const = 0;
		virtual void				equip(AMateria *material) = 0;
		virtual void				unequip(int index) = 0;
		virtual void				use(int index, ICharacter &target) = 0;
};

#endif
