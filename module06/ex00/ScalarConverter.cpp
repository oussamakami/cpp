/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:04:03 by okamili           #+#    #+#             */
/*   Updated: 2023/12/27 18:49:37 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static bool	isChar(const std::string &literal)
{
	if (literal.length() == 1 && !isdigit(literal[0]))
		return (true);
	return (false);
}

static bool isInt(const std::string &literal)
{
	if (!literal.length())
		return (false);

	for (int i = 0; i < (int)literal.length(); i++)
	{
		if (!i && strchr("+-", literal[i]))
			continue;
		if (!isdigit(literal[i]))
			return (false);
	}

	return (true);
}

static bool isDouble(const std::string &literal)
{
	int	confirmed = 0;

	if (!literal.length())
		return (false);
	if (literal == "+inf" || literal == "-inf" || literal == "nan")
		return (true);
	for (int i = 0; i < (int)literal.length(); i++)
	{
		if (!i && strchr("+-", literal[i]))
			continue;
		if (literal[i] == '.')
		{
			if (!isdigit(literal[i + 1]) || confirmed++)
				return (false);
		}
		else if (!isdigit(literal[i]))
			return (false);
	}
	
	return (confirmed ? true : false);
}

static bool	isFloat(const std::string &literal)
{
	int	confirmed = 0;

	if (!literal.length())
		return (false);
	if (literal == "+inff" || literal == "-inff" || literal == "nanf")
		return (true);
	for (int i = 0; i < (int)(literal.length() - 1); i++)
	{
		if (!i && strchr("+-", literal[i]))
			continue;
		if (literal[i] == '.')
		{
			if (!isdigit(literal[i + 1]) || confirmed++)
				return (false);
		}
		else if (!isdigit(literal[i]))
			return (false);
	}
	
	return (literal[literal.length() - 1] == 'f') ? true : false;
}

static int	getType(const std::string &literal)
{
	if (isChar(literal))
		return (1);
	if (isInt(literal))
		return (2);
	if (isDouble(literal) && (literal == "+inf" || literal == "-inf" || literal == "nan"))
		return (3);
	if (isFloat(literal) && (literal == "+inff" || literal == "-inff" || literal == "nanf"))
		return (4);
	if (isDouble(literal))
		return (5);
	if (isFloat(literal))
		return (6);
	return (0);
}

static void	convertChar(const std::string &literal)
{
	if (!isprint(literal[0]))
		std::cout << "char   : Non displayable\n";
	else
		std::cout << "char   : '" << literal[0] << "'\n";
	std::cout << "int    : " << (int)literal[0] << "\n";
	std::cout << "float  : " << (float)literal[0] << ".0f\n";
	std::cout << "double : " << (double)literal[0] << ".0\n";
}

static void	convertInt(const std::string &literal)
{
	int num = 0;
	std::stringstream(literal) >> num;
	if (!isprint(num))
		std::cout << "char   : Non displayable\n";
	else
		std::cout << "char   : '" << (char)num << "'\n";
	std::cout << "int    : " << num << "\n";
	std::cout << "float  : " << num << ".0f\n";
	std::cout << "double : " << num << ".0\n";
}

static void	convertFloat(const std::string literal)
{
	float	num = 0;
	std::stringstream holder(literal);
	holder.imbue(std::locale("C"));
	holder >> num;
	holder.str("");
	holder << num;
	if (!isprint((int)num))
		std::cout << "char   : Non displayable\n";
	else
		std::cout << "char   : '" << (char)num << "'\n";
	std::cout << "int    : " << (int)num << "\n";
	if (!strchr(holder.str().c_str(), '.'))
	{
		std::cout << "float  : " << num << ".0f\n";
		std::cout << "double : " << num << ".0\n";
	}
	else
	{
		std::cout << "float  : " << num << "f\n";
		std::cout << "double : " << num << "\n";	
	}
}

static void	convertPseudo(const std::string literal)
{
	std::cout << "char   : impossible\n";
	std::cout << "int    : impossible\n";
	std::cout << "float  : " << literal.substr(0,3) << "f\n";
	std::cout << "double : " << literal.substr(0,3) << "\n";
}

static void convertFailed(void)
{
	std::cout << "char   : impossible\n";
	std::cout << "int    : impossible\n";
	std::cout << "float  : impossible\n";
	std::cout << "double : impossible\n";
}

void ScalarConverter::convert(const std::string &literal)
{
	switch (getType(literal))
	{
		case 1:
			convertChar(literal);
			break;
		case 2:
			convertInt(literal);
			break;
		case 3:
		case 4:
			convertPseudo(literal);
			break;
		case 5:
		case 6:
			convertFloat(literal);
			break;
		default:
			convertFailed();
			break;
	}
}
