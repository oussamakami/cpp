/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:44:03 by okamili           #+#    #+#             */
/*   Updated: 2024/05/31 04:21:03 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
PmergeMe<T>::PmergeMe(void)
{
	std::cout << "hola\n";
}

template<typename T>
PmergeMe<T>::~PmergeMe(void)
{
	std::cout << "byebye\n";
}

// template <typename T>
// typename PmergeMe<T>::pair_list	PmergeMe<T>::makePairs(const T &list)
// {
// 	pair_data	temp;
// 	pair_list	result;

// 	for (int i = 0; i < list.size(); i++)
// 	{
// 		if (!(i % 2))
// 			temp.first = list.at(i);
// 		else
// 		{
// 			if (list.at(i) < temp.first)
// 			{
// 				temp.second = temp.first;
// 				temp.first = list.at(i);
// 			}
// 			else
// 				temp.second = list.at(i);
// 			result.push_back(temp);
// 		}
// 	}
// 	return (result);
// }

// template <typename T>
// typename PmergeMe<T>::pair_list	PmergeMe<T>::orderPairs(pair_list pairs, const T &order)
// {
// 	pair_list	result;

// 	for (int i = 1; i < order.size(); i++)
// 	{
// 		for (int j = 0; j < pairs.size(); j++)
// 		{
// 			if (order.at(i) == pairs.at(j).second)
// 			{
// 				result.push_back(pairs.at(j));
// 				pairs.erase(pairs.begin() + j);
// 			}
// 		}
// 	}
	
// 	return (result);
// }

// template <class T>
// void	PmergeMe<T>::binaryInsertion(int numberaa, T &list)
// {
// 	for (int i = 0; i < list.size(); i++)
// 	{
// 		if (list.at(i) >= numberaa)
// 		{
// 			list.insert(list.begin() + i, numberaa);
// 			return ;
// 		}
// 	}
// 	list.push_back(numberaa);
// }


// template <class T>
// T PmergeMe<T>::FordJohnsonSort(const T &listToSort)
// {
// 	pair_list		pairs;
// 	T				pending;
// 	T mainChain;

// 	pairs = makePairs(listToSort);
	
// 	for (int i = 0; i < pairs.size(); i++)
// 	{
// 		if (!i)
// 			mainChain.push_back(pairs.at(i).first);
// 		mainChain.push_back(pairs.at(i).second);
// 	}
// 	if (listToSort.size() % 2)
// 		pending.push_back(listToSort.back());
// 	if (mainChain.size() < 3)
// 	{
// 		if (pending.size())
// 			binaryInsertion(pending.at(0), mainChain);
// 		return (mainChain);
// 	}

// 	mainChain = FordJohnsonSort(mainChain);
// 	pairs = orderPairs(pairs, mainChain);
	
// 	if (pending.size())
// 		binaryInsertion(pending.at(0), mainChain);
// 	for (int i = 1; i < pairs.size(); i++)
// 		binaryInsertion(pairs.at(i).first, mainChain);
// 	return (mainChain);
// }
