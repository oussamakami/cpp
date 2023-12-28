/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 08:03:10 by okamili           #+#    #+#             */
/*   Updated: 2023/12/28 09:38:22 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class T>
void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <class T>
T min(T a, T b)
{
	return ((a < b) ? a : b);
}

template <class T>
T max(T a, T b)
{
	return ((a > b) ? a : b);
}

#endif
