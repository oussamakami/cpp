/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:29:12 by okamili           #+#    #+#             */
/*   Updated: 2023/11/04 23:16:25 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <cstring>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string _phoneNum;
		std::string _darkSecret;
		/**
		 * @brief Get user input and optionally validate it.
		 * 
		 * @param prompt The prompt message.
		 * @param validate Specify the type of input validation:
		 *             0 - Accept any alphabetic characters and spaces.
		 *             1 - Accept only numbers
		 * 			   2 - Only check not empty
		 *             Any other value - No input validation.
		 * @return The user's input as a string.
		 */
		std::string _get_input(std::string prompt, int validate);
	public:
		void		populate(void);
		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getPhoneNum(void) const;
		std::string getDarkSecret(void) const;
};
std::string get_input(std::string prompt, int isnum);
#endif