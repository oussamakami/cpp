/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 21:39:14 by okamili           #+#    #+#             */
/*   Updated: 2024/01/05 00:30:26 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(size_t size) : _size(size)
{	
}

Span::Span(const Span &origin)
{
	*this = origin;
}

Span::~Span(void)
{
}

Span	&Span::operator=(const Span &origin)
{
	if (this == &origin)
		return (*this);
	this->_size = origin._size;
	_data.clear();
	_data.insert(_data.end(), origin._data.begin(), origin._data.end());
	return (*this);
}

void	Span::addNumber(int value)
{
	if (_data.size() >= _size)
		throw Span::SizeOverFlowException();
	_data.push_back(value);
}

void	Span::addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	std::vector<int> holder(begin, end);
	
	if ((_data.size() + holder.size()) > _size)
		throw Span::SizeOverFlowException();
	_data.insert(_data.end(), holder.begin(), holder.end());
}

size_t	Span::longestSpan(void) const
{
	std::vector<int>::const_iterator	maxvalue;
	std::vector<int>::const_iterator	minvalue;

	if (_data.size() < 2)
		throw Span::NoSpanException();

	maxvalue = std::max_element(_data.begin(), _data.end());
	minvalue = std::min_element(_data.begin(), _data.end());
	
	return (*maxvalue - *minvalue);
}

size_t	Span::shortestSpan(void) const
{
	int	minSpan;
	std::vector<int> tmp;

	if (_data.size() < 2)
		throw Span::NoSpanException();
	
	minSpan = longestSpan();
	tmp.insert(tmp.end(), _data.begin(), _data.end());
	std::sort(tmp.begin(), tmp.end());
	for (size_t i = 1; i < tmp.size(); i++)
	{
		minSpan = std::min(minSpan, (tmp.at(i) - tmp.at(i - 1)));
	}
	return (minSpan);
}

void	Span::printSpan(void) const
{
	std::cout << "{";
	for (std::vector<int>::const_iterator i = _data.begin(); i != _data.end(); i++)
	{
		std::cout << *i;
		if ((i + 1) != _data.end())
			std::cout << ", ";
	}
	std::cout << "}\n";
}

const char	*Span::SizeOverFlowException::what(void) const throw()
{
	return ("ERROR: Span size is full\n");
}

const char	*Span::NoSpanException::what(void) const throw()
{
	return ("ERROR: no Span to calculate\n");
}