/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:35:21 by okamili           #+#    #+#             */
/*   Updated: 2024/01/04 20:26:00 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
	int data[6] = {0,9,4,6,7,2};
	std::vector<int> container1;

	container1.insert(container1.end(), data, data + 6);
	easyfind(container1, 7);
	easyfind(container1, 8);
	easyfind(container1, 3);
	easyfind(container1, 0);
	return (0);
}
