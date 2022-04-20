/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:49:11 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/20 21:38:44 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

int	main()
{
	string	buf;
	Contact Phonebook;
	

	cout << "Enter a command: ";
	cin >> buf;
	while (buf.compare("EXIT") != 0)
	{
		// if (buf.compare("ADD"))
		// 	//add function;
		// else if (buf.compare("SEARCH"))
		// 	//search function;
		cout << "Enter a command: ";
		cin >> buf;
	}
	Phonebook.create_contact("Remy", "Gelin", "rem", "0988", "secret");
	cout << "Your name is: " << Phonebook.get_first_name() << " " << Phonebook.get_last_name() << endl;
	return (0);
}