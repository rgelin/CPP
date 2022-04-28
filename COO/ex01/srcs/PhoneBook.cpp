/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:07:53 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/28 15:22:46 by rgelin           ###   ########.fr       */
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
	// cout << "First name: " << _phone_book[i].get_first_name() << endl;
}

string	PhoneBook::get_last_name(int i) {
	return (_phone_book[i].get_last_name());
	// cout << "Last name: " << _phone_book[i].get_last_name() << endl;
}

string	PhoneBook::get_surname(int i) {
	// cout << "Surname: " << _phone_book[i].get_surname() << endl;
	return (_phone_book[i].get_surname());
}

string	PhoneBook::get_phone(int i) {
	return (_phone_book[i].get_phone());
	// cout << "Phone number: " << _phone_book[i].get_phone() << endl;
}
 
string	PhoneBook::get_secret(int i) {
	return (_phone_book[i].get_secret());
	// cout << "Darkest secret: " << _phone_book[i].get_secret() << endl;
} 
