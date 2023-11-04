/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 01:36:03 by okamili           #+#    #+#             */
/*   Updated: 2023/11/04 23:18:51 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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

std::string Contact::_get_input(std::string prompt, int validate)
{
	std::string	input;
	
	std::cout << prompt << "> ";
	getline(std::cin, input);
	if ((validate >= 0 && validate <= 2) && input.empty())
	{
		std::cout << "\tError: empty input\n";
		return (_get_input(prompt, validate));
	}
	if (validate == 1)
	{
		for (int i = 0; input[i]; i++)
		{
			if (!isdigit(input[i]))
			{
				std::cout << "\tError: input must only contains numbers\n";
				std::cout << "\texample: 0999999999...\n";
				return (_get_input(prompt, validate));
			}
		}
	}
	else if (!validate)
	{
		for (int i = 0; input[i]; i++)
		{
			if (!isalpha(input[i]) && !isspace(input[i]))
			{
				std::cout << "\tError: input must only contains alpha characters\n";
				return (_get_input(prompt, validate));
			}
		}
	}
	return (input);
}

void Contact::populate(void)
{
	this->_firstName = this->_get_input("Enter First Name", 0);
	this->_lastName = this->_get_input("Enter Last Name", 0);
	this->_nickName = this->_get_input("Enter Nick Name", 0);
	this->_phoneNum = this->_get_input("Enter Phone Number", 1);
	this->_darkSecret = this->_get_input("Enter Darkest Secret", 2);
}
