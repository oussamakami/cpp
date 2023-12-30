/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 09:42:16 by okamili           #+#    #+#             */
/*   Updated: 2023/12/30 20:01:03 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int add(int &num)
{
	num++;
	return (0);
}

template <class I>
void printer(I &num)
{
	std::cout << num << " ";
}

int main()
{
	int a[5] = {7, 15, 0, 9, 3};

	::iter(a, 5, printer<int>);
	std::cout << "\n\nadding +1 to each number:\n";
	
	::iter(a, 5, add);

	::iter(a, 5, printer<int>);
	std::cout << "\n\n";
	
	return (0);
}
