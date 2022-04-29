/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:59:28 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/29 13:31:49 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact (void) {
	
}

Contact::~Contact (void) {
	
}

void Contact::set_contact_values(string f, string l, string sur, string p, string s)
{ 
	this->_first_name = f;
	this->_last_name = l;
	this->_surname = sur;
	this->_phone = p;
	this->_secret = s;
}

string Contact::get_first_name(void) const {
	return (this->_first_name);
}

string Contact::get_last_name(void) const {
	return (this->_last_name);
}

string Contact::get_surname(void) const {
	return (this->_surname);
}

string Contact::get_phone(void) const {
	return (this->_phone);
}

string Contact::get_secret(void) const {
	return (this->_secret);
}
