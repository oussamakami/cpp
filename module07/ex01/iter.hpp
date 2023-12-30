/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 09:41:55 by okamili           #+#    #+#             */
/*   Updated: 2023/12/30 19:51:28 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <class T, class U>
void iter(T &arr, size_t length, U func)
{
	for(size_t i = 0; i < length; i++)
		func(arr[i]);
}

#endif
