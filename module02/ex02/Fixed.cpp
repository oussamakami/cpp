/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:18:03 by okamili           #+#    #+#             */
/*   Updated: 2023/11/13 15:35:57 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->fixedPoint = 0;
}

Fixed::Fixed(const int num)
{
	this->fixedPoint = num << 8;
}

Fixed::Fixed(const float num)
{
	int	shiftCount = 1;

	for (int i = 0; i < fractionalBits; i++)
		shiftCount *= 2;
	this->fixedPoint = std::roundf(num * shiftCount);
}

Fixed::Fixed(const Fixed &origin)
{
	*this = origin;
}

Fixed	&Fixed::operator=(const Fixed &origin)
{
	this->setRawBits(origin.getRawBits());
	return (*this);
}

Fixed::~Fixed(void)
{
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

bool	Fixed::operator>(const Fixed &origin) const
{
	return (fixedPoint > origin.fixedPoint);
}

bool	Fixed::operator>=(const Fixed &origin) const
{
	return (fixedPoint >= origin.fixedPoint);
}

bool	Fixed::operator<(const Fixed &origin) const
{
	return (fixedPoint < origin.fixedPoint);
}

bool	Fixed::operator<=(const Fixed &origin) const
{
	return (fixedPoint <= origin.fixedPoint);
}

bool	Fixed::operator==(const Fixed &origin) const
{
	return (fixedPoint == origin.fixedPoint);
}

bool	Fixed::operator!=(const Fixed &origin) const
{
	return (fixedPoint != origin.fixedPoint);
}

Fixed	Fixed::operator+(const Fixed &origin) const
{
	return (Fixed(toFloat() + origin.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &origin) const
{
	return (Fixed(toFloat() - origin.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &origin) const
{
	return (Fixed(toFloat() * origin.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &origin) const
{
	return (Fixed(toFloat() / origin.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	++fixedPoint;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	original(*this);
	++(*this);
	return (original);
}

Fixed	&Fixed::operator--(void)
{
	++fixedPoint;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	original(*this);
	--(*this);
	return (original);
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	return ((first < second) ? first : second);
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
	return ((first < second) ? first : second);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	return ((first > second) ? first : second);
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
	return ((first > second) ? first : second);
}
