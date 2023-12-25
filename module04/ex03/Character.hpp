/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:02:39 by okamili           #+#    #+#             */
/*   Updated: 2023/12/25 07:06:36 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_items[4];
		int			_garbage_length;
		AMateria	**_garbage;
	public:
		Character(std::string name);
		Character(const Character &origin);
		~Character(void);
		Character	&operator=(const Character &origin);
		const std::string	&getName(void) const;
		void				equip(AMateria *material);
		void				unequip(int index);
		void				use(int index, ICharacter &target);
};

#endif
