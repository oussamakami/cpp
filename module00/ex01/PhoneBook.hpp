/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamili <okamili@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:21:14 by okamili           #+#    #+#             */
/*   Updated: 2023/11/05 05:45:53 by okamili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		int			_rewriteIndex;
		Contact		_contacts[8];
		void		_addContact(void);
		void		_listContacts(void);
		void		_contactPrevw(int maxIndex);
		std::string	_trunkstr(std::string str) const;
	public:
		PhoneBook(void);
		void	ComMonitor(void);
};

#endif