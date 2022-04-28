/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:49:11 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/28 15:50:24 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"
#include <stdlib.h>

string	get_user_info(string message)
{
	string buf;
	
	cout << message;
	getline(cin, buf);
	if (cin.eof())
		return (NULL);
	else
		return (buf);
}

int		ft_add(PhoneBook *phonebook, int i)
{
	string	f, l, sur, p, secret;

	f = get_user_info("First name: ");
	if (f.size() == 0)
		return (1);
	l = get_user_info("Last name: ");
	if (l.size() == 0)
		return (1);
	sur = get_user_info("Surname: ");
	if (sur.size() == 0)
		return (1);
	p = get_user_info("Phone number: ");
	if (p.size() == 0)
		return (1);
	secret = get_user_info("Darkest secret: ");
	if (f.size() == 0)
		return (1);
	(*phonebook).add_contact(i, f, l, sur, p, secret);
	cout << endl;
	return (0);
}

void	ft_search(PhoneBook *phonebook)
{
	string	buf;
	int		index;
	string	first_name;
	string	last_name;
	string	surname;

	cout << setw(10) << "Index" << "|" << setw(10) << "First Name" << "|" << setw(10) << "Last Name" << "|" << setw(10) << "Nickname" << endl;
	for (int i = 0; i < 8; i++)
	{
		first_name = (*phonebook).get_first_name(i);
		last_name = (*phonebook).get_last_name(i);
		surname = (*phonebook).get_surname(i);
		if (first_name.size() > 10) {
			first_name.resize(9);
			first_name.resize(10, '.');
		}
		if (last_name.size() > 10) {
			last_name.resize(9);
			last_name.resize(10, '.');
		}
		if (surname.size() > 10) {
			surname.resize(9);
			surname.resize(10, '.');
		}
		cout << setw(10) << (i + 1) << "|" << setw(10) << first_name << "|" << setw(10) << last_name << "|" << setw(10) << surname << endl;
	}
	buf = get_user_info("Which contact index are looking for: ");
	index = atoi(buf.c_str());
	// phonebook[i].print_first_name(i);
	// phonebook[i].print_last_name(i);
	// phonebook[i].print_surname(i);
	// phonebook[i].print_phone(i);
	// phonebook[i].print_secret(i);
	return ;
		
}

int	main()
{
	string	buf;
	int		i = 0;
	PhoneBook phonebook;
	
	while (!cin.eof())
	{
		cout << "Enter a command [ADD, SEARCH, EXIT]:\n> ";
		getline(cin, buf);
		if (buf == "ADD") {
			if (i >= 8)
				i = 0;
			if (ft_add(&phonebook, i))
				cout << "Incomplete contact, abort..." << endl;
			i += 1;
		}
		else if (buf == "SEARCH")
			ft_search(&phonebook);
		else if (buf == "EXIT")
			break ;
		else
				cout << "Only ADD/ SEARCH/ EXIT command accepted!" << endl;
	}
}