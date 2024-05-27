/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 03:41:13 by okamili           #+#    #+#             */
/*   Updated: 2024/05/27 05:08:43 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <stack>

class RPN
{
	private:
		std::string			_Expression;
		std::stack<float>	_Containter;
		void	performOperation(char operation);
	public:
		RPN(void);
		RPN(const RPN &origin);
		~RPN(void);

		RPN		&operator=(const RPN &origin);
		void	setExpression(const std::string &expression);
		float	calculateRPN(void);
};

#endif