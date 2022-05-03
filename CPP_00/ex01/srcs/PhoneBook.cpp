/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:07:53 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/02 14:04:09 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook (void) {
	
}

PhoneBook::~PhoneBook (void) {

}

void PhoneBook::add_contact (int i, std::string f,std::string l,std::string sur,std::string p,std::string secret) {
	_phone_book[i].set_contact_values(f, l, sur, p, secret);
}

std::string	PhoneBook::get_first_name(int i) const {
	return (_phone_book[i].get_first_name());
}

std::string	PhoneBook::get_last_name(int i) const {
	return (_phone_book[i].get_last_name());
}

std::string	PhoneBook::get_surname(int i) const {
	return (_phone_book[i].get_surname());
}

std::string	PhoneBook::get_phone(int i) const {
	return (_phone_book[i].get_phone());
}
 
std::string	PhoneBook::get_secret(int i) const {
	return (_phone_book[i].get_secret());
}

void	PhoneBook::print_contact(int i) const {
	std::cout << "First name: " << _phone_book[i].get_first_name() << std::endl;
	std::cout << "Last name: " << _phone_book[i].get_last_name() << std::endl;
	std::cout << "Surname: " << _phone_book[i].get_surname() << std::endl;
	std::cout << "Phone number: " << _phone_book[i].get_phone() << std::endl;
	std::cout << "Darkest secret: " << _phone_book[i].get_secret() << std::endl;
}
