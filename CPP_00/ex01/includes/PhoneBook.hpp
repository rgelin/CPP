/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:05:47 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/02 14:03:09 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _phone_book[8];
		
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact(int i, std::string f, std::string l, std::string sur, std::string p, std::string secret);
		std::string	get_first_name(int i) const;
		std::string	get_last_name(int i) const;
		std::string	get_surname(int i) const;
		std::string	get_phone(int i) const;
		std::string	get_secret(int i) const;
		void	print_contact(int i) const;
};

#endif