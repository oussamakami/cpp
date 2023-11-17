/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:25:53 by okamili           #+#    #+#             */
/*   Updated: 2023/11/17 18:55:37 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		std::string ideas[100];
		Brain(void);
		Brain(const Brain &origin);
		Brain &operator=(const Brain &origin);
		~Brain(void);
};

#endif
