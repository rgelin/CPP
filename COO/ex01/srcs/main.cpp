/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:49:11 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/28 04:46:37 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"
#include <stdlib.h>

void	ft_add(PhoneBook *phonebook, int i)
{
	string	f, l, sur, p, secret;

	cout << "first name: ";
	getline(cin, f);
	// cin >> f;
	if (cin.eof())
		return ;
	cout << endl << "last name: ";
	cin >> l;
	if (l.size() == 0)
		return ;
	cout << endl << "surname: ";
	cin >> sur;
	if (sur.size() == 0)
		return ;
	cout << endl << "phone number: ";
	cin >> p;
	if (p.size() == 0)
		return ;
	cout << endl << "darkest secret: ";
	cin >> secret;
	if (secret.size() == 0)
		return ;
	// if (f.size() == 0 || l.size() == 0 || sur.size() == 0 || p.size() == 0 || secret.size() == 0) {
	// 	cout << "incomplete profile, abort.." << endl;
	// 	return ;
	// }
	phonebook[i].add_contact(0, f, l, sur, p, secret);
	// phonebook[i].print_first_name(i);
	// phonebook[i].print_last_name(i);
	// phonebook[i].print_surname(i);
	// phonebook[i].print_phone(i);
	// phonebook[i].print_secret(i);
	return ;
}

void	ft_search(PhoneBook *phonebook)
{
	string	index;
	int		i;
	
	cout << "which index?: ";
	cin >> index;
	i = atoi(index.c_str());
	phonebook[i].print_first_name(i);
	phonebook[i].print_last_name(i);
	phonebook[i].print_surname(i);
	phonebook[i].print_phone(i);
	phonebook[i].print_secret(i);
		
}

int	main()
{
	string	buf;
	int		i;
	PhoneBook phonebook;
	
	i = 0;
	while (!cin.eof())
	{
		cout << "Enter a command [ADD, SEARCH, EXIT]:\n> ";
		getline(cin, buf);
		if (buf == "ADD") {
			if (i >= 8)
				i = 0;
			else {
				ft_add(&phonebook, i);
				i += 1;	
			}
		}
		else if (buf == "SEARCH")
			ft_search(&phonebook);
		else if (buf == "EXIT")
			break ;
		else
				cout << "Only ADD/ SEARCH/ EXIT command accepted!" << endl;
	}
}