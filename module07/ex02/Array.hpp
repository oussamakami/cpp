/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 21:05:36 by okamili           #+#    #+#             */
/*   Updated: 2023/12/30 22:31:06 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
	private:
		T		*_data;
		size_t	_size;
	public:
		Array(void);
		Array(size_t length);
		Array(const Array &origin);
		~Array(void);
		
		Array	&operator=(const Array &origin);
		T		&operator[](size_t index);
		size_t	size(void) const;

		class	OverShootException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
};

template <class T>
Array<T>::Array(void) : _data(new T()), _size(0)
{}

template <class T>
Array<T>::Array(size_t length) : _data(new T[length]()), _size(length)
{
}

template <class T>
Array<T>::Array(const Array &origin)
{
	*this = origin;
}

template <class T>
Array<T>::~Array(void)
{
	delete [] _data;
}

template <class T>
Array<T> &Array<T>::operator=(const Array &origin)
{
	if (this == &origin)
		return (*this);

	delete [] _data;
	_size = origin._size;
	_data = new T[_size]();

	for (size_t i = 0; i < _size; i++)
		_data[i] = origin._data[i];
	return (*this);
}

template <class T>
T &Array<T>::operator[](size_t index)
{
	if (index >= _size)
		throw Array::OverShootException();

	return (_data[index]);
}

template <class T>
size_t Array<T>::size(void) const
{
	return (this->_size);
}

template <class T>
const char *Array<T>::OverShootException::what(void) const throw()
{
	return ("Error: Invalid Index\n");
}


#endif
