/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:40:28 by okamili           #+#    #+#             */
/*   Updated: 2023/11/18 19:59:46 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


static float	calculateArea(Point const a, Point const b, Point const c)
{
	float	x1, x2, x3, y1, y2, y3, Area;

	x1 = a.getX_axis().toFloat();
	y1 = a.getY_axis().toFloat();
	x2 = b.getX_axis().toFloat();
	y2 = b.getY_axis().toFloat();
	x3 = c.getX_axis().toFloat();
	y3 = c.getY_axis().toFloat();

	/*
		To determine the area of the triangle, we'll utilize the following formula:

		Area = |(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))| / 2
	*/

	Area = ((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1-y2)));
	Area = (Area > 0) ? Area : (Area * -1);
	Area /= 2;
	return (Area);
}


bool	bsp(Point const a, Point const b, Point const c, Point const point)
{

	/*
		Barycentric Coordinates Method:

		In the context of Barycentric Coordinates, to ascertain whether a point P belongs to
		a triangle ABC, we calculate the areas of the triangles PAB, PBC, and PAC.
		If the sum of these triangle areas equals the area of triangle ABC,
		then point P is deemed to belong to, be a vertex of, or lie on an edge of triangle ABC.
	
		Additionally, to determine if point P lies on an edge or a vertex of triangle ABC, 	
		one of the areas must equal 0.
	*/

	Fixed Area_ABC(calculateArea(a, b, c));
	Fixed Area_PAB(calculateArea(point, a, b));
	Fixed Area_PBC(calculateArea(point, b, c));
	Fixed Area_PAC(calculateArea(point, a, c));

	// Verifying whether the point is a vertex or lies on the edge of the triangle.
	if (!Area_PAB.toInt() || !Area_PBC.toInt() || !Area_PAC.toInt())
		return (false);

	return ((Area_PAB + Area_PBC + Area_PAC) == Area_ABC);
}
