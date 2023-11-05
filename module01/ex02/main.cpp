/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 06:36:36 by okamili           #+#    #+#             */
/*   Updated: 2023/11/05 20:23:47 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << std::string(80, '=') << "\n";
	std::cout << "string memory address:\t\t\033[0;32m" << &string << "\033[0m\n";
	std::cout << "memory address in PTR:\t\t\033[0;32m" << stringPTR << "\033[0m\n";
	std::cout << "memory address in REF:\t\t\033[0;32m" << &stringREF << "\033[0m\n";
	std::cout << std::string(80, '=') << "\n\n";

	std::cout << std::string(80, '=') << "\n";
	std::cout << "string variable value:\t\t\033[0;32m" << string << "\033[0m\n";
	std::cout << "pointing value in PTR:\t\t\033[0;32m" << *stringPTR << "\033[0m\n";
	std::cout << "pointing value in REF:\t\t\033[0;32m" << stringREF << "\033[0m\n";
	std::cout << std::string(80, '=') << "\n";

	return (0);
}
