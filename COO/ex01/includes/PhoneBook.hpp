/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:05:47 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/29 13:29:25 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

using namespace std;

class PhoneBook
{
	private:
		Contact _phone_book[8];
		
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact(int i, string f, string l, string sur, string p, string secret);
		string	get_first_name(int i) const;
		string	get_last_name(int i) const;
		string	get_surname(int i) const;
		string	get_phone(int i) const;
		string	get_secret(int i) const;
		void	print_contact(int i) const;
};

#endif