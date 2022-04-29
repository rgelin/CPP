/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:07:53 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/29 02:59:00 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

//pas de type de retour pour les constructeurs et destructeurs

PhoneBook::PhoneBook (void) {
	
}

PhoneBook::~PhoneBook (void) {

}

void PhoneBook::add_contact (int i, string f,string l,string sur,string p,string secret) {
	_phone_book[i].set_contact_values(f, l, sur, p, secret);
}

string	PhoneBook::get_first_name(int i) {
	return (_phone_book[i].get_first_name());
}

string	PhoneBook::get_last_name(int i) {
	return (_phone_book[i].get_last_name());
}

string	PhoneBook::get_surname(int i) {
	return (_phone_book[i].get_surname());
}

string	PhoneBook::get_phone(int i) {
	return (_phone_book[i].get_phone());
}
 
string	PhoneBook::get_secret(int i) {
	return (_phone_book[i].get_secret());
}

void	PhoneBook::print_contact(int i) {
	cout << "First name: " << _phone_book[i].get_first_name() << endl;
	cout << "Last name: " << _phone_book[i].get_last_name() << endl;
	cout << "Surname: " << _phone_book[i].get_surname() << endl;
	cout << "Phone number: " << _phone_book[i].get_phone() << endl;
	cout << "Darkest secret: " << _phone_book[i].get_secret() << endl;
}
