/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:49:11 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/28 14:54:36 by rgelin           ###   ########.fr       */
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
	string	index;
	int		i;
	
	cout << "which index?: ";
	getline(cin, index);
	i = atoi(index.c_str());
	phonebook[i].print_first_name(i);
	phonebook[i].print_last_name(i);
	phonebook[i].print_surname(i);
	phonebook[i].print_phone(i);
	phonebook[i].print_secret(i);
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