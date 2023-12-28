/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 08:03:35 by okamili           #+#    #+#             */
/*   Updated: 2023/12/28 09:38:28 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main()
{
	int x = 17;
	int y = 42;

	std::cout << "x = " << x << " and y = " << y << "\n";
	std::cout << "let swap them\n";

	::swap(x, y);
	
	std::cout << "x = " << x << " and y = " << y << "\n";
	
	std::cout << "the smallest one is " << ::min(x, y) << "\n";
	std::cout << "the biggest one is " << ::max(x, y) << "\n";


	/*
	::<function name> means get this function from global scope
	so in a way ::<function name> is the same as <function name> without ::

	<name>::function name> means get this function from the scope <scope>
	example if my global scope has the function add() and my class test has the same function add()

	::add() will call the global scope one
	
	add() same as the previous one call the global scope one

	test::add() call the function add that exist inside the class test
	*/

	std::cout << "\n###TEST PROVIDED IN THE SUBJECT##\n";

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}
