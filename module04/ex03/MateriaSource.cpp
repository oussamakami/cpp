/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 08:32:29 by okamili           #+#    #+#             */
/*   Updated: 2023/12/25 13:39:41 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_memo[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &origin)
{
	*this = origin;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete _memo[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &origin)
{
	if (this == &origin)
		return (*this);
	for (int i = 0; i < 4; i++)
		_memo[i] = (origin._memo[i]) ? (origin._memo[i])->clone() : NULL;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_memo[i])
		{
			_memo[i] = materia;
			break;
		}
	}
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_memo[i]->getType() == type)
		{
			return (_memo[i]->clone());
		}
	}
	return (0);
}
