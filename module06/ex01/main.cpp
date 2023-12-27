/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:11:20 by okamili           #+#    #+#             */
/*   Updated: 2023/12/27 19:22:12 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data *a = new Data;
	Data *b = NULL;
	uintptr_t raw;
	

	a->info = "test0";
	raw = Serializer::serialize(a);
	
	std::cout << "data info [a]: " << a->info << "\n";
	std::cout << "data info [b]: (NULL)\n\n";
	std::cout << "data info [a] serial: " << raw << "\n\n";
	
	b = Serializer::deserialize(raw);

	std::cout << "data info [a]: " << a->info << "\n";
	std::cout << "data info [b]: " << b->info << "\n\n";
	
	std::cout << "editing [b] value to equal 'test1'\n\n";
	b->info = "test1";

	std::cout << "data info [a]: " << a->info << "\n";
	std::cout << "data info [b]: " << a->info << "\n";
	
	delete a;

	return (0);
}
