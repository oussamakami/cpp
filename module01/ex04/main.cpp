/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 02:43:08 by okamili           #+#    #+#             */
/*   Updated: 2023/11/09 04:44:16 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileStream.hpp"

int main(int argc, char **argv)	
{
	if (argc != 4)
	{
		std::cerr << "program only accept 3 arguments\n";
		std::cerr << "cppsed <filename> <oldstr> <newstr>\n";
		return (1);
	}
	FileStream data(argv[1], argv[2], argv[3]);

	if (data.readInput())
		return (1);
	data.replaceStr();
	data.writeOutput();
	return (0);
}
