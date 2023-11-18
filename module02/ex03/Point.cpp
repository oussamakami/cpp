/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:00:32 by okamili           #+#    #+#             */
/*   Updated: 2023/11/18 21:03:29 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(Fixed(0)), y(Fixed(0))
{
}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y))
{
}

Point::Point(const Point &origin) : x(origin.x), y(origin.y)
{
}

Point &Point::operator=(const Point &origin)
{
	//nothing to do here since the coordinates are const
	(void) origin;
	return (*this);
}

Point::~Point(void)
{
}

const Fixed	Point::getX_axis(void) const
{
	return (x);
}

const Fixed	Point::getY_axis(void) const
{
	return (y);
}
