/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:20:28 by okamili           #+#    #+#             */
/*   Updated: 2024/05/24 01:06:47 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <sstream>

static float stringToFloat(const std::string &value)
{
	float				result;
	std::stringstream	ss(value);

	ss >> result;
	return (result);	
}

static bool	isAllDigits(const std::string &value)
{
	for (int i = 0; value[i]; i++)
	{
		if (!isdigit(value[i]))
			return (false);
	}
	return (true);
}

static bool	isValidDate(const std::string &date)
{
	std::string		year;
	std::string		month;
	std::string		day;
	size_t			firstHyphen = date.find("-");
	size_t			secondHyphen = date.find("-", firstHyphen + 1);
	
	year = date.substr(0, firstHyphen);
	month = date.substr(firstHyphen + 1, secondHyphen - firstHyphen - 1);
	day = date.substr(secondHyphen + 1);
	
	if (!isAllDigits(year) || !isAllDigits(month) || !isAllDigits(day))
		return (false);
	if (year.length() != 4)
		return (false);
	if (month.length() != 2 || (int)stringToFloat(month) < 1 || (int)stringToFloat(month) > 12)
		return (false);
	if (day.length() != 2 || (int)stringToFloat(day) < 1 || (int)stringToFloat(day) > 31)
		return (false);
	return (true);
}

BitcoinExchange::BitcoinExchange(void)
{
	std::string		key;
	std::string		value;
	std::string		line;
	std::ifstream	data("./data.csv");

	if (!data.is_open())
	{
		std::cerr << "ERROR: unable to access Database.\n";
		exit(1);
	}
	getline(data, line);
	while (getline(data, line))
	{
		key = line.substr(0, line.find(","));
		value = line.substr(line.find(",") + 1);
		this->_Database[key] = stringToFloat(value);
	}
	data.close();
}

BitcoinExchange::~BitcoinExchange(void)
{
	
}

float	BitcoinExchange::getDateExchange(const std::string &date)
{
	float							result = 0;
	std::map<std::string, float>::iterator it;
	
	if (!isValidDate(date))
	{
		std::cerr << "ERROR: invalide date \"" << date << "\"\n";
		return (-1); 
	}
	
	for (it = this->_Database.begin(); it != _Database.end(); it++)
	{
		if (it->first > date)
			break;
		if (it->first <= date)
			result = it->second;
	}
	return (result);
}
