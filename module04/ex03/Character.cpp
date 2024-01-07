/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:26:08 by okamili           #+#    #+#             */
/*   Updated: 2024/01/06 02:24:07 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) :	_name(name),
											_garbage_length(0),
											_garbage(NULL)
{
	for (int i = 0; i < 4; i++)
		_items[i] = NULL;
}

Character::Character(const Character &origin)
{
	*this = origin;
}

Character	&Character::operator=(const Character &origin)
{
	if (this == &origin)
		return (*this);
	
	this->_name = origin._name;
	for (int i = 0; i < 4; i++)
		this->_items[i] = (origin._items[i]) ? (origin._items[i])->clone() : NULL;
	_garbage = NULL;
	_garbage_length = 0;
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete _items[i];
	if (!_garbage)
		return ;
	for (int i = 0; i < _garbage_length; i++)
		delete _garbage[i];
	delete [] _garbage;
}

const std::string	&Character::getName(void) const
{
	return (_name);
}

void	Character::equip(AMateria *material)
{
	int			index = -1;
	AMateria	*tmp;

	if (!material) return;
	while (++index < 4)
	{
		if (!_items[index])
		{
			_items[index] = material;
			break;
		}
	}
	if (index >= 4)
	{
		tmp = _items[0];
		_items[0] = material;
		unequip(0);
		_items[0] = tmp;
	}
}

void	Character::unequip(int index)
{
	AMateria	**tmp;

	if (index >= 4 || index < 0) return;
	if (!_items[index]) return;

	tmp = new AMateria*[_garbage_length + 1];
	for (int i = 0; i < _garbage_length; i++)
		tmp[i] = _garbage[i];
	tmp[_garbage_length++] = _items[index];
	delete [] _garbage;
	_garbage = tmp;
	_items[index] = NULL;
}

void	Character::use(int index, ICharacter &target)
{
	if (!_items[index])
	{
		std::cout << _name << " doesnt have that item!\n";
		return ;
	}
	_items[index]->use(target);
}
