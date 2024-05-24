/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:06:58 by okamili           #+#    #+#             */
/*   Updated: 2024/05/24 01:13:42 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*

make class in canonical form
check each line provided
calculate the value
once done reorder the code so everything is done inside the class

*/

void	handleTableData(const std::string &line, const BitcoinExchange &Database)
{
	
}

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
	
	table.open(argv[1]);
	if (!table.is_open())
	{
		std::cerr << "ERROR: unable to open the file\n";
		return (1);
	}
	getline(table, line);
	while (getline(table, line))
	{
		handleTableData(line, Database);
	}
	

	Database.getDateExchange("2023-09-13");
}