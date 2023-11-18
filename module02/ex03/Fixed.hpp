/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:26:36 by okamili           #+#    #+#             */
/*   Updated: 2023/11/13 15:37:06 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					fixedPoint;
		static const int	fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &origin);
		Fixed	&operator=(const Fixed &origin);
		bool	operator>(const Fixed &origin) const;
		bool	operator>=(const Fixed &origin) const;
		bool	operator<(const Fixed &origin) const;
		bool	operator<=(const Fixed &origin) const;
		bool	operator==(const Fixed &origin) const;
		bool	operator!=(const Fixed &origin) const;
		Fixed	operator+(const Fixed &origin) const;
		Fixed	operator-(const Fixed &origin) const;
		Fixed	operator*(const Fixed &origin) const;
		Fixed	operator/(const Fixed &origin) const;
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed &min(Fixed &first, Fixed &second);
		static const Fixed &min(const Fixed &first, const Fixed &second);
		static Fixed &max(Fixed &first, Fixed &second);
		static const Fixed &max(const Fixed &first, const Fixed &second);
};

std::ostream	&operator<<(std::ostream &output, const Fixed &origin);

#endif
