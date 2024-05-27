/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:06:58 by okamili           #+#    #+#             */
/*   Updated: 2024/05/27 03:26:52 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	std::string		line;
	std::ifstream	table;
	BitcoinExchange	Database;

	if (argc != 2)
	{
		std::cerr << "ERROR: invalid number of arguments\n";
		return (1);
	}

	Database.handleTableData(std::string(argv[1]));
	return (0);
}
