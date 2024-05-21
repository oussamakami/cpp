/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 21:22:19 by okamili           #+#    #+#             */
/*   Updated: 2024/05/21 20:29:07 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
void	listArray(Array<T> &data, std::string arrayName)
{
	std::cout << arrayName << " = {";
	for (size_t i = 0; i < data.size(); i++)
	{
		std::cout << data[i];

		if (!((i + 1) == data.size()))
			std::cout << ", ";
	}
	std::cout << "}[size: "<< data.size() << "]\n";
}

int main()
{
	try
	{
		Array<int> a(3);
		Array<int> b;

		listArray(a, "a");
		listArray(b, "b");

	
		std::cout << "\nassign b to equal a\n";
		b = a;
	
		listArray(a, "a");
		listArray(b, "b");
	
		std::cout << "\nmaking b[0] equal 5\n";
		b[0] = 5;
		std::cout << "b[0] = " << b[0] << "\n";

		std::cout << "\nlisting a and b to check if the copy is deep!\n";
		listArray(a, "a");
		listArray(b, "b");

		std::cout << "\ntesting if b[7] = 1 throws an exception:\n";
		b[7] = 1;
	}
	catch (std::exception &e)
	{
		std::cerr << "exception " << e.what();
	}
	
	return (0);
}
