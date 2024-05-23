/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:41:23 by okamili           #+#    #+#             */
/*   Updated: 2024/05/23 19:07:53 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
void	listStack(const std::string &stackname, typename MutantStack<T>::iterator begin, typename MutantStack<T>::iterator end)
{
	typename MutantStack<T>::iterator it;

	std::cout << stackname << "\n{";
	for (it = begin; it != end; it++)
	{
		if (it != begin)
			std::cout << ", ";
		std::cout << *it;
	}
	std::cout << "}\n";
}


int main()
{
	MutantStack<int> mstack;

	listStack<int>("mstack", mstack.begin(), mstack.end());

	std::cout << "\npushing numbers 5,8,9,1,3,44,123,0,-17,and 5 to mstack\n\n";
	mstack.push(5);
	mstack.push(8);
	mstack.push(9);
	mstack.push(1);
	mstack.push(3);
	mstack.push(44);
	mstack.push(123);
	mstack.push(0);
	mstack.push(-17);
	mstack.push(5);
	
	listStack<int>("mstack", mstack.begin(), mstack.end());
	std::cout << "\nthe top value in mstack is: " << mstack.top() << "\n";
	std::cout << "removing the two top elements\n\n";
	mstack.pop();
	mstack.pop();
	listStack<int>("mstack", mstack.begin(), mstack.end());
	std::cout << "\nthe size of mstack is: " << mstack.size() << "\n";

	std::cout << "creating a copy of mstack named copystack\n\n";
	MutantStack<int> copystack(mstack);
	listStack<int>("mstack", mstack.begin(), mstack.end());
	listStack<int>("copystack", copystack.begin(), copystack.end());

	return 0;
}