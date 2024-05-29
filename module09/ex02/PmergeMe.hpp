/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:38:48 by okamili           #+#    #+#             */
/*   Updated: 2024/05/29 13:50:44 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe
{
	private:
		typedef	std::pair<int,int>		pair_data;
		typedef std::vector<pair_data>	pair_list;
		
		pair_list			makePairs(const std::vector<int> &listToSort);
		void				orderList(pair_list &pairs, const std::vector<int> &order);
		std::vector<int>	binaryInsertion(int number, std::vector<int> &list);
	public:
		PmergeMe(void);
		~PmergeMe(void);
		std::vector<int>	FordJohnsonSort(const std::vector<int> &listToSort);
};

#endif