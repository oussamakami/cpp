/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:32:10 by okamili           #+#    #+#             */
/*   Updated: 2024/01/04 18:51:47 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <class T>
bool easyfind(T &container, int target)
{
	if (std::find(container.begin(), container.end(), target) != container.end())
	{
		std::cout << "easyfind: " << target << " exist in the container\n";
		return (true);
	}
	std::cerr << "easyfind: unable to find " << target << " inside the container\n";
	return (false);
}

#endif
