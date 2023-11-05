/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 01:36:03 by okamili           #+#    #+#             */
/*   Updated: 2023/11/05 04:40:44 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	_firstName = "";
	_lastName = "";
	_nickName = "";
	_phoneNum = "";
	_darkSecret = "";
}

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickName(void) const
{
	return (this->_nickName);
}

std::string	Contact::getPhoneNum(void) const
{
	return (this->_phoneNum);
}

std::string	Contact::getDarkSecret(void) const
{
	return (this->_darkSecret);
}

std::string	Contact::get_input(std::string prompt, int validate)
{
	std::string	input;
	
	if (std::cin.eof())
		std::cout << "\n";
	std::cin.clear();
	clearerr(stdin);
	std::cout << prompt << "> ";
	getline(std::cin, input);
	if ((validate >= 0 && validate <= 2) && input.empty())
	{
		std::cout << "\t\033[0;31mError\033[0m: empty input\n";
		return (get_input(prompt, validate));
	}
	if (validate == 1)
	{
		for (int i = 0; input[i]; i++)
		{
			if (!isdigit(input[i]))
			{
				std::cout << "\t\033[0;31mError\033[0m: input must only contains numbers\n";
				return (get_input(prompt, validate));
			}
		}
	}
	else if (!validate)
	{
		for (int i = 0; input[i]; i++)
		{
			if (!isalpha(input[i]) && !isspace(input[i]))
			{
				std::cout << "\t\033[0;31mError\033[0m: input must only contains alpha characters\n";
				return (get_input(prompt, validate));
			}
		}
	}
	return (input);
}

void	Contact::populate(void)
{
	this->_firstName = this->get_input("Enter FirstName", 0);
	this->_lastName = this->get_input("Enter LastName", 0);
	this->_nickName = this->get_input("Enter NickName", 0);
	this->_phoneNum = this->get_input("Enter PhoneNumber", 1);
	this->_darkSecret = this->get_input("Enter DarkSecret", 2);
}
