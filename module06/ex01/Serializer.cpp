/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:09:34 by okamili           #+#    #+#             */
/*   Updated: 2023/12/27 19:11:15 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serializer::serialize(Data *ptr)
{
	return ((uintptr_t) ptr);
}

Data		*Serializer::deserialize(uintptr_t raw)
{
	return ((Data *) raw);
}
