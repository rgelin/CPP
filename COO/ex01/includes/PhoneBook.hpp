/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:05:47 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/21 14:51:31 by rgelin           ###   ########.fr       */
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
		void	print_first_name(int i);
		void	print_last_name(int i);
		void	print_surname(int i);
		void	print_phone(int i);
		void	print_secret(int i);
		void	search();
		void	exit();
};

#endif