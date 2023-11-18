/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:56:24 by okamili           #+#    #+#             */
/*   Updated: 2023/11/18 20:10:57 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed	x;
		const Fixed	y;
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &origin);
		Point &operator=(const Point &origin);
		~Point(void);
		const Fixed	getX_axis(void) const;
		const Fixed	getY_axis(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
