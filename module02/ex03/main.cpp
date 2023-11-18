/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:29:45 by okamili           #+#    #+#             */
/*   Updated: 2023/11/18 21:02:23 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point A(-3, -2);
	Point B(17, 9);
	Point C(25, -2);
	Point W(15, 4);
	Point X(22, -2);
	Point Y(-7, 4);
	Point Z(-3, -2);

	std::cout << std::endl;
	std::cout << "                                               B(17,9)           \n";
	std::cout << "                                             . .                 \n";
	std::cout << "                                          .     .                \n";
	std::cout << "                                       .         .               \n";
	std::cout << "                                    .             .              \n";
	std::cout << "                                 .                 .             \n";
	std::cout << "                              .                     .            \n";
	std::cout << "   Y(-7,4)                 .                         .           \n";
	std::cout << "                        .              W(15,4)        .          \n";
	std::cout << "                     .                                 .         \n";
	std::cout << "                  .                                     .        \n";
	std::cout << "               .                                         .       \n";
	std::cout << "            .                                             .      \n";
	std::cout << "         A/Z. .  .  .  .  .  .  .  .  .  .  .  .  X  .  .  C     \n";
	std::cout << "       (-3,-2)                                (22, -2)   (25, -2)\n\n";

	if (bsp(A, B, C, W)) {
		std::cout << "The point W(" << W.getX_axis().toFloat() << ", ";
		std::cout << W.getY_axis().toFloat() << ") ";
		std::cout << " belongs to the triagle ABC\n";	
	} else {
		std::cout << "The point W(" << W.getX_axis().toFloat() << ", ";
		std::cout << W.getY_axis().toFloat() << ") ";
		std::cout << " doesn't belongs to the triagle ABC\n";
	}

	if (bsp(A, B, C, X)) {
		std::cout << "The point X(" << X.getX_axis().toFloat() << ", ";
		std::cout << X.getY_axis().toFloat() << ") ";
		std::cout << "belongs to the triagle ABC\n";	
	} else {
		std::cout << "The point X(" << X.getX_axis().toFloat() << ", ";
		std::cout << X.getY_axis().toFloat() << ") ";
		std::cout << "doesn't belongs to the triagle ABC\n";
	}

	if (bsp(A, B, C, Y)) {
		std::cout << "The point Y(" << Y.getX_axis().toFloat() << ", ";
		std::cout << Y.getY_axis().toFloat() << ") ";
		std::cout << "belongs to the triagle ABC\n";	
	} else {
		std::cout << "The point Y(" << Y.getX_axis().toFloat() << ", ";
		std::cout << Y.getY_axis().toFloat() << ") ";
		std::cout << " doesn't belongs to the triagle ABC\n";
	}

	if (bsp(A, B, C, Z)) {
		std::cout << "The point Z(" << Z.getX_axis().toFloat() << ", ";
		std::cout << Z.getY_axis().toFloat() << ") ";
		std::cout << "belongs to the triagle ABC\n";	
	} else {
		std::cout << "The point Z(" << Z.getX_axis().toFloat() << ", ";
		std::cout << Z.getY_axis().toFloat() << ") ";
		std::cout << "doesn't belongs to the triagle ABC\n";
	}

	return (0);
}
