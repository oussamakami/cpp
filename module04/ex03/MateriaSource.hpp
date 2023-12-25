/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 07:39:33 by okamili           #+#    #+#             */
/*   Updated: 2023/12/25 08:32:13 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_memo[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &origin);
		~MateriaSource(void);
		MateriaSource	&operator=(const MateriaSource &origin);
		void			learnMateria(AMateria *materia);
		AMateria		*createMateria(const std::string &type);
};

#endif
