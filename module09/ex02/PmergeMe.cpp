/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:44:03 by okamili           #+#    #+#             */
/*   Updated: 2024/05/29 13:47:43 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
	std::cout << "constructor called\n";
}

PmergeMe::~PmergeMe(void)
{
	std::cout << "deconstructor called\n";
}

PmergeMe::pair_list	PmergeMe::makePairs(const std::vector<int> &list)
{
	pair_data	temp;
	pair_list	result;

	for (int i = 0; i < list.size(); i++)
	{
		if (!(i % 2))
			temp.first = list.at(i);
		else
		{
			if (list.at(i) < temp.first)
			{
				temp.second = temp.first;
				temp.first = list.at(i);
			}
			else
				temp.second = list.at(i);
			result.push_back(temp);
		}
	}
	return (result);
}

std::vector<int> PmergeMe::FordJohnsonSort(const std::vector<int> &listToSort)
{
	pair_list		pairs;
	std::vector<int> mainChain;

	pairs = makePairs(listToSort);
	
	for (int i = 0; i < pairs.size(); i++)
	{
		mainChain.push_back(pairs.at(i).second);
	}
	
	if (mainChain.size() < 3)
	{
		//insert small numbers to main chain first
		return (mainChain);
	}

	mainChain = FordJohnsonSort(mainChain);
	

	
	return (mainChain);
}

