/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 03:40:52 by okamili           #+#    #+#             */
/*   Updated: 2024/05/27 05:07:14 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	RPN calc;

	if (argc == 2)
		calc.setExpression(argv[1]);

	std::cout << calc.calculateRPN() << std::endl;
	return (0);
}
