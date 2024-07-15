/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 23:43:22 by okamili           #+#    #+#             */
/*   Updated: 2024/05/31 04:23:49 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main()
{
	PmergeMe<int> hello;
	// std::vector<int> mylist;
	// std::vector<int> sorted;

	// mylist.push_back(5);
	// mylist.push_back(0);
	// mylist.push_back(8);
	// mylist.push_back(1);
	// mylist.push_back(2);
	// mylist.push_back(9);
	// mylist.push_back(6);
	// mylist.push_back(7);
	// mylist.push_back(3);
	// mylist.push_back(5);


	// sorted = hola.FordJohnsonSort(mylist);
	// std::cout << "my list: (";
	// for (int i = 0; i < mylist.size(); i++)
	// {
	// 	std::cout << mylist.at(i) << ", ";
	// }
	// std::cout << ")\n";
	
	// std::cout << "my list: (";
	// for (int i = 0; i < sorted.size(); i++)
	// {
	// 	std::cout << sorted.at(i) << ", ";
	// }
	// std::cout << ")\n";
	// std::cout << "my list: (0, 1, 2, 3, 5, 5, 6, 7, 8, 9, )\n";

	return (0);
}


/*
Ford-Johnson Algorithm Explanation:

1. Divide the list of (n) elements into pairs, resulting in (n/2) pairs of size 2.
3. imagine each pair in the following format (a, b)
2. Sort each pair so that the larger element is at 'b' location.
4. Create a new list 'Main chain' containing a(0) plus all the larger element (b) from each pair.
5. Recursively sort 'Main chain' following steps 1 to 5 until 'Main chain' size is less than 3.
6. Use the sorted sequence of larger elements 'Main chain' to sort the pairs.
7. create the following lists (the key is to imagine this sturcture without implementing it to preserve memory):
   - 'Pending': contains the smaller elements a(1), a(2), ..., a(n).
   - 'Main chain': contains the sorted larger elements and the first smaller element a(0), b(0), b(1), b(2), ..., b(n).
8. insert 'Pending' list into 'main chain' using binary insertion.
9. The main chain now contains the fully sorted list of elements.

Example:
###ITERATION NUM 1###
- Numbers to sort: (5, 2, 1, 9, 3, 7, 0)
- Pending = ()    Main-chain: ()
- Original pairs: (5, 2), (1, 9), (3, 7) (0, NULL) // since one pair is incomplete lets put it in Pending.
- Pending = (0)    Main-chain: ()
- Original pairs: (5, 2), (1, 9), (3, 7) //let sort the numbers inside each pair
- Sorted pairs: (2, 5), (1, 9), (3, 7)
- Pending = (0)    Main-chain: (2, 5, 9, 7)
		###ITERATION NUM 2###
		- Numbers to sort: (2, 5, 9, 7)
		- Pending = ()    Main-chain: ()
		- Original pairs: (2, 5), (9, 7)
		- Sorted pairs: (2, 5), (7, 9)
		- Pending = ()    Main-chain: (2, 5, 9)
				###ITERATION NUM 3###
				- Numbers to sort: (2, 5, 9)
				- Pending = ()    Main-chain: ()
				- Original pairs: (2, 5), (9, NULL) //since one pair is incomplete lets put it in Pending.
				- Pending = (9)    Main-chain: ()
				- Sorted pairs: (2, 5)
				- Pending = (9)    Main-chain: (2, 5) 
				- NO need to call another iteration since Main-chain has less than 3 numbers
				- add a1 a2 a3 ... an into pending //we skip this step since we only have one pair (2, 5) which is (a0, b0)
				- Insert Pending into Main-chain using binary insertion
				- Pending = ()    Main-chain: (2, 5, 9)
				###ITERATION NUM 3 RETURNS (2, 5, 9)
		- set Main-Chain to equal the return of the ITERATION 3
		- Pending = ()    Main-chain: (2, 5, 9)
		- Pairs Sorted Using Main-chain: (2, 5) (7, 9)
		- add a1 a2 a3 ... an into pending (2, 5) (7, 9) which is (a0, b0) (a1, b1)
		- Pending = (7)    Main-chain: (2, 5, 9)
		- Insert Pending into Main-chain using binary insertion
		- Pending = ()    Main-chain: (2, 5, 7, 9)
		###ITERATION NUM 2 RETURNS (2, 5, 7, 9)
- set Main-Chain to equal the return of the ITERATION 2
- Pending = (0)    Main-chain: (2, 5, 7, 9)
- Pairs Sorted Using Main-chain: (2, 5), (3, 7), (1, 9)
- add a1 a2 a3 ... an into pending (2, 5), (3, 7), (1, 9) which is (a0, b0) (a1, b1) (a2, b2)
- Pending = (0, 3, 1)    Main-chain: (2, 5, 7, 9)
- Insert Pending into Main-chain using binary insertion
- Pending = ()    Main-chain: (0, 1, 2, 3, 5, 7, 9)
###ITERATION NUM 1 RETURNS (0, 1, 2, 3, 5, 7, 9)

Note: Binary insertion reduces insertion steps from O(N) to a maximum of O(log N) by combining insertion sort and binary search.
*/



// std::vector<std::pair<int, int>> makePairs(std::vector<int> &list)
// {
// 	std::pair<int, int>				temp;
// 	std::vector<std::pair<int, int>> result;

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

// 	return result;
// }

// void	sortPairsList(std::vector<std::pair<int, int>> &pairs, std::vector<int> sorted)
// {
// 	std::pair<int, int>	holder;
	

// 	// for (int i = 0; i < pairs.size(); i++)
// 	// {
// 	// 	std::cout << "(" << pairs.at(i).first << ", " << pairs.at(i).second << ")\n";
// 	// }
	
// 	for (int i = 0; i < sorted.size(); i++)
// 	{
// 		for (std::vector<std::pair<int, int>>::iterator it = pairs.begin() + i; it != pairs.end(); it++)
// 		{
// 			if (sorted.at(i) == it->second)
// 			{
// 				holder = *it;
// 				pairs.erase(it);
// 				pairs.insert(pairs.begin() + i, holder);
// 				break;
// 			}
// 		}
// 	}
// 	// std::cout << "====================================\n";

// 	// for (int i = 0; i < pairs.size(); i++)
// 	// {
// 	// 	std::cout << "(" << pairs.at(i).first << ", " << pairs.at(i).second << ")\n";
// 	// }
// }



// std::vector<int>	sortList(std::vector<int> &list, int &steps)
// {
// 	std::vector<int> pending;
// 	std::vector<int> result;
// 	std::vector<std::pair<int, int>> pairs;
// 	pairs = makePairs(list);

	
// 	if (list.size() % 2)
// 	{
// 		pending.push_back(list.back());
// 		steps++;
// 	}
	
// 	if (pairs.size() == 1)
// 	{
// 		result.push_back(pairs.at(0).first);
// 		result.push_back(pairs.at(0).second);
// 		steps += 2;
// 	}
// 	else
// 	{
// 		for (int i = 0; i < pairs.size(); i++)
// 		{
// 			result.push_back(pairs.at(i).second);
// 			steps += 1;
// 		}
// 		result = sortList(result, steps);
// 		sortPairsList(pairs, result);
// 		for (int i = 0; i < pairs.size(); i++)
// 		{
// 			if (i == 0)
// 				result.insert(result.begin(), pairs.at(i).first);
// 			else
// 				pending.push_back(pairs.at(i).first);
// 			steps += 1;
// 		}
// 	}
// 	for (int i = 0; i < pending.size(); i++)
// 	{
// 		for (std::vector<int>::iterator it = result.begin(); it != result.end(); it++)
// 		{
// 			if (pending.at(i) < *it)
// 			{
// 				result.insert(it, pending.at(i));
// 				steps ++;
// 				break;
// 			}
// 		}
// 	}
	
// 	return (result);
// }



// int main()
// {
// 	std::vector<int> hi;
// 	std::vector<int> result;

// 	int steps = 0;

// 	hi.push_back(5);
// 	hi.push_back(0);
// 	hi.push_back(8);
// 	hi.push_back(1);
// 	hi.push_back(2);
// 	hi.push_back(9);
// 	hi.push_back(6);
// 	hi.push_back(7);
// 	hi.push_back(3);
// 	hi.push_back(5);

// 	result = sortList(hi, steps);

// 	std::cout << "(";
// 	for (int i = 0; i < result.size(); i++)
// 	{
// 		std::cout << result.at(i) << ", ";
// 	}
// 	std::cout << ") steps:" << steps << "\n";

// 	return (0);
// }