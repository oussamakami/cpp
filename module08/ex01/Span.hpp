/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 21:32:47 by okamili           #+#    #+#             */
/*   Updated: 2024/01/05 00:19:58 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		size_t _size;
		std::vector<int> _data;
	public:
		Span(size_t size);
		Span(const Span &origin);
		~Span(void);
		
		Span &operator=(const Span &origin);
		void	addNumber(int value);
		void	addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
		size_t	longestSpan(void) const;
		size_t	shortestSpan(void) const;
		void	printSpan(void) const;

	class SizeOverFlowException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class NoSpanException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

#endif
