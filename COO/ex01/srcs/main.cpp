/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:49:11 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/29 13:25:09 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void check_size(string *first_name, string *last_name, string *surname)
{
	if ((*first_name).size() > 10) {
		(*first_name).resize(9);
		(*first_name).resize(10, '.');
	}
	if ((*last_name).size() > 10) {
		(*last_name).resize(9);
		(*last_name).resize(10, '.');
	}
	if ((*surname).size() > 10) {
		(*surname).resize(9);
		(*surname).resize(10, '.');
	}
}

void	ft_search(PhoneBook *phonebook)
{
	string	buf, first_name, last_name, surname;
	int		index;

	cout << setw(10) << "Index" << "|" << setw(10) << "First Name" << "|"
			<< setw(10) << "Last Name" << "|" << setw(10) << "Nickname" << endl;
	for (int i = 0; i < 8; i++) {
		first_name = (*phonebook).get_first_name(i);
		last_name = (*phonebook).get_last_name(i);
		surname = (*phonebook).get_surname(i);
		check_size(&first_name, &last_name, &surname);
		cout << setw(10) << (i + 1) << "|" << setw(10) << first_name << "|" << setw(10)
				<< last_name << "|" << setw(10) << surname << endl;
	}
	buf = get_user_info("Enter a contact index: ");
	index = atoi(buf.c_str());
	if (index <= 0 || index > 8 )
		cout << "\nInvalid index..\n" << endl;
	else
		(*phonebook).print_contact(index - 1);
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
				cout << "\nIncomplete contact, abort..\n" << endl;
			i += 1;
		}
		else if (buf == "SEARCH")
			ft_search(&phonebook);
		else if (buf == "EXIT")
			break ;
		else
				cout << "\nOnly ADD/ SEARCH/ EXIT command accepted!\n" << endl;
	}
}