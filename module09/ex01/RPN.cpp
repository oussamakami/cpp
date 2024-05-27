/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 04:13:55 by okamili           #+#    #+#             */
/*   Updated: 2024/05/27 05:13:04 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static float stringToFloat(const std::string &value)
{
	float			result;
	std::stringstream	ss(value);

	ss >> result;
	return (result);	
}


RPN::RPN(void)
{	
}

RPN::RPN(const RPN &origin)
{
	*this = origin;
}

RPN::~RPN(void)
{
}

RPN		&RPN::operator=(const RPN &origin)
{
	if (this != &origin)
		this->_Expression = origin._Expression;
	return (*this);
}

void	RPN::performOperation(char operation)
{
	float	firstnum;
	float	secondnum;

	secondnum = _Containter.top();
	_Containter.pop();
	firstnum = _Containter.top();
	_Containter.pop();

	if (operation == '+')
		_Containter.push(firstnum + secondnum);
	if (operation == '-')
		_Containter.push(firstnum - secondnum);
	if (operation == '*')
		_Containter.push(firstnum * secondnum);
	if (operation == '/')
		_Containter.push(firstnum / secondnum);
}

void	RPN::setExpression(const std::string &expression)
{
	this->_Expression = expression;
}

float	RPN::calculateRPN(void)
{
	size_t		invalid = 0;
	std::string	operators = "+-*/";
	
	if (this->_Expression.empty())
	{
		std::cerr << "ERROR: Please provide a valid RPN expression111.\n";
		exit(1);
	}
	while (!_Containter.empty())
		_Containter.pop();
	for (int i = 0; _Expression[i]; i++)
	{
		if (isdigit(_Expression[i]) && !isdigit(_Expression[i + 1]))
			_Containter.push(stringToFloat(std::string(1, _Expression[i])));
		else if (operators.find(_Expression[i]) != std::string::npos && _Containter.size() >= 2)
			performOperation(_Expression[i]);
		else if (!(_Expression[i] == ' '))
		{
			invalid = 1;
			break;
		}
	}
	if (invalid || _Containter.size() != 1)
	{
		std::cerr << "ERROR: Please provide a valid RPN expression.\n";
		exit(1);
	}
	return (_Containter.top());
}
