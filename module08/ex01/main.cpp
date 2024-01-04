/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:03:33 by okamili           #+#    #+#             */
/*   Updated: 2024/01/05 00:39:57 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	std::vector<int> tmp;

	std::srand(time(NULL));
	for (int i = 0; i < 1000; i++)
	{
		tmp.push_back((rand() % 10) + i);
	}
	
	Span a(1000);
	
	a.addNumber(tmp.begin(), tmp.end());

	// a.printSpan();
	std::cout << "\n\ntesting 1000 item" << std::endl;
	std::cout << a.longestSpan() << std::endl;
	std::cout << a.shortestSpan() << std::endl;

	return (0);
}