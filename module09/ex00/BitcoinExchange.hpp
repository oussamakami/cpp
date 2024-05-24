/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:16:49 by okamili           #+#    #+#             */
/*   Updated: 2024/05/24 00:59:37 by okamili          ###   ########.fr       */
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
		~BitcoinExchange(void);
		float	getDateExchange(const std::string &date);
	
};

#endif