/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:11:20 by okamili           #+#    #+#             */
/*   Updated: 2024/05/21 18:14:41 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data *a = new Data;
	Data *b = NULL;
	uintptr_t raw;
	uintptr_t raw2;
	

	a->info = "test0";

	raw = Serializer::serialize(a);
	raw2 = Serializer::serialize(b);

	std::cout << "data info [a]: " << a->info << "\n";
	std::cout << "data info [a] serial: " << raw << "\n\n";

	std::cout << "data info [b]: (NULL)\n";
	std::cout << "data info [b] serial: " << raw2 << "\n\n";

	std::cout << "===setting [b] to point at the same block as [a]===\n";
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
