/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:18:03 by okamili           #+#    #+#             */
/*   Updated: 2023/11/10 12:05:31 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constractor called\n";
	this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed &origin)
{
	std::cout << "Copy constractor called\n";
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
	std::cout << "getRawBits member function called\n";
	return (this->fixedPoint);
}

void	Fixed::setRawBits(const int raw)
{
	this->fixedPoint = raw;
}
