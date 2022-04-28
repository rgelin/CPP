/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:07:53 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/28 14:51:59 by rgelin           ###   ########.fr       */
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

void	PhoneBook::print_first_name(int i) {
	cout << "First name: " << _phone_book[i].get_first_name() << endl;
}

void	PhoneBook::print_last_name(int i) {
	cout << "Last name: " << _phone_book[i].get_last_name() << endl;
}

void	PhoneBook::print_surname(int i) {
	cout << "Surname: " << _phone_book[i].get_surname() << endl;
}

void	PhoneBook::print_phone(int i) {
	cout << "Phone number: " << _phone_book[i].get_phone() << endl;
}
 
void	PhoneBook::print_secret(int i) {
	cout << "Darkest secret: " << _phone_book[i].get_secret() << endl;
} 
