/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:24:35 by okamili           #+#    #+#             */
/*   Updated: 2023/11/19 13:51:14 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap(const std::string name);
		~DiamondTrap();
		void whoAmI(void);
		using ScavTrap::attack;	//this line is not required since
								//FragTrap doesnt have a unique definition
								//of the attack function to give us a double definition
								//and because claptrap is virtual, its definition is overwritten by
								//scavtrap, which means DiamondTrap inheret Scavtrap attack by default
};

#endif
