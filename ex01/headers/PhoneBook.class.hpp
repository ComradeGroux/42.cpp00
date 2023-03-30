/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgroux <vgroux@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:34:36 by vgroux            #+#    #+#             */
/*   Updated: 2023/03/30 14:53:25 by vgroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.class.hpp"
#include <regex>
#include <cctype>

class PhoneBook
{
	private:
		Contact		_contacts[8];
		std::string	_addStr(std::string str) const;
		std::string _addPhone(std::string str) const;
		bool		_isPhoneNumberValid(std::string str) const;

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact(void);
		int		numberContact(void) const;
		void	displayTable(void) const;
};

#endif