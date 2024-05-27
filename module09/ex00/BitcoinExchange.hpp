/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:16:49 by okamili           #+#    #+#             */
/*   Updated: 2024/05/27 03:19:36 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _Database;
	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &origin);
		~BitcoinExchange(void);

		BitcoinExchange	&operator=(const BitcoinExchange &origin);
		float	getDateExchange(const std::string &date);
		void	handleTableData(const std::string &path);
};

#endif