/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:07:53 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/20 21:43:58 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

//pas de type de retour pour les constructeurs et destructeurs

PhoneBook::PhoneBook (void) {
	
}

PhoneBook::~PhoneBook (void) {

}

void	PhoneBook::add (void)
{
	string	f, l, sur, p, secret;
	Contact new_contact;

	cout << "first name: ";
	cin >> f;
	cout << endl << "last name: ";
	cin >> l;
	cout << endl << "surname: ";
	cin >> sur;
	cout << endl << "phone number: ";
	cin >> p;
	cout << endl << "darkest secret: ";
	cin >> secret;
	if (f.size() == 0 || l.size() == 0 || sur.size() == 0 || p.size() == 0 || secret.size() == 0) {
		cout << "not completed profile, abort.." << endl;
		return ;
	}
	this->_phone_book[0] = new_contact.create_contact(f, l, sur, p, secret);
}
