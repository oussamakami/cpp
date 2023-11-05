/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 01:52:02 by okamili           #+#    #+#             */
/*   Updated: 2023/11/05 04:42:16 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_rewriteIndex = 0;
}

void	PhoneBook::_addContact(void)
{
	this->_contacts[this->_rewriteIndex++].populate();
	if (this->_rewriteIndex >= 8)
		this->_rewriteIndex = 0;
}

std::string	PhoneBook::_trunkstr(std::string str) const
{
	str = (str + std::string(10, ' ')).substr(0, 10);
	if (!isspace(str.back()))
		str.back() = '.';
	return (str);
}

void	PhoneBook::_listContacts(void)
{
	int	index = -1;

	std::cout << " ___________________________________________ \n";
	std::cout << "|          |          |          |          |\n";
	std::cout << "|  Index   | FrstName | LastName | NickName |\n";
	std::cout << "|__________|__________|__________|__________|\n";
	while (++index <= 7 && !this->_contacts[index].getFirstName().empty())
	{
		std::cout << "|    " << index << "     |";
		std::cout << _trunkstr(_contacts[index].getFirstName()) << "|";
		std::cout << _trunkstr(_contacts[index].getLastName()) << "|";
		std::cout << _trunkstr(_contacts[index].getNickName()) << "|\n";
	}
	std::cout << "|__________|__________|__________|__________|\n";
	_contactPrevw(--index);
}

void	PhoneBook::_contactPrevw(int maxIndex)
{
	int	input;

	while (maxIndex >= 0)
	{
		input = atoi(_contacts[0].get_input("Enter Contact Index", 1).c_str());
		if (input <= maxIndex && input >= 0)
			break;
		std::cout << "\t\033[0;31mError\033[0m: " << input << " is not a valid contact index.\n";
	}
	if (maxIndex >= 0)
	{
		std::cout << "\033[0;32mFirstName\033[0m: " << _contacts[input].getFirstName() << "\n";
		std::cout << "\033[0;32mLastName\033[0m: " << _contacts[input].getLastName() << "\n";
		std::cout << "\033[0;32mNickName\033[0m: " << _contacts[input].getNickName() << "\n";
		std::cout << "\033[0;32mPhoneNumber\033[0m: " << _contacts[input].getPhoneNum() << "\n";
		std::cout << "\033[0;32mDarkSecret\033[0m: " << _contacts[input].getDarkSecret() << "\n";	
	}
}

void	PhoneBook::ComMonitor(void)
{
	std::string	input;
	
	std::cout << "\033[0;33mWelcome to Your Crappy Phonebook\n";
	std::cout << "Available Commands:\n";
	std::cout << "1. ADD: Save a New Contact\n";
	std::cout << "2. SEARCH: Display a Specific Contact\n";
	std::cout << "3. EXIT: Quit Program\n";
	std::cout << "DISCLAIMER: All contacts will be lost when the program is closed!\033[0m\n";
	while (true)
	{
		if (std::cin.eof())
			std::cout << "\n";
		std::cin.clear();
		clearerr(stdin);
		std::cout << "> ";
		getline(std::cin, input);
		if (input == "ADD")
			this->_addContact();
		if (input == "SEARCH")
			this->_listContacts();
		if (input == "EXIT")
			break;
	}
}
