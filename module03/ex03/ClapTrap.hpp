/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 04:01:17 by okamili           #+#    #+#             */
/*   Updated: 2023/11/11 07:20:38 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	//making it protected means its still private to rest of the code
	//but the child/derived class will have access to it
	protected:
		std::string		name;
		unsigned int	HP;
		unsigned int	EP;
		unsigned int	AP;
	public:
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &tocopy);
		~ClapTrap(void);
		ClapTrap &operator=(const ClapTrap &tocopy);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
