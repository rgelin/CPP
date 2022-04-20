/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:05:47 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/20 21:44:16 by rgelin           ###   ########.fr       */
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
		void	add();
		void	search();
		void	exit();
};

#endif