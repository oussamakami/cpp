/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:18:03 by okamili           #+#    #+#             */
/*   Updated: 2023/11/17 07:17:28 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	this->fixedPoint = 0;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called\n";
	this->fixedPoint = num << 8;
}

Fixed::Fixed(const float num)
{
	int	shiftCount = 1;

	std::cout << "Float constructor called\n";
	for (int i = 0; i < fractionalBits; i++)
		shiftCount *= 2;
	this->fixedPoint = roundf(num * shiftCount);
}

Fixed::Fixed(const Fixed &origin)
{
	std::cout << "Copy constructor called\n";
	*this = origin;
}

Fixed	&Fixed::operator=(const Fixed &origin)
{
	std::cout << "Copy assignment operator called\n";
	this->setRawBits(origin.getRawBits());
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	return (this->fixedPoint);
}

void	Fixed::setRawBits(const int raw)
{
	this->fixedPoint = raw;
}

int	Fixed::toInt(void) const
{
	return (fixedPoint >> 8);
}

float	Fixed::toFloat(void) const
{
	int	shiftCount = 1;

	for (int i = 0; i < fractionalBits; i++)
		shiftCount *= 2;
	return ((float)fixedPoint / shiftCount);
}

std::ostream	&operator<<(std::ostream &output, const Fixed &origin)
{
	output << origin.toFloat();
	return (output);
}
