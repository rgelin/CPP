/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:49:11 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/02 14:05:27 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <stdlib.h>

static std::string	get_user_info(std::string message)
{
	std::string buf;
	
	std::cout << message;
	getline(std::cin, buf);
	if (std::cin.eof())
		return (NULL);
	else
		return (buf);
}

static int		ft_add(PhoneBook *phonebook, int i)
{
	std::string	f, l, sur, p, secret;

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
	std::cout << std::endl;
	return (0);
}

static void check_size(std::string *first_name, std::string *last_name, std::string *surname)
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

static void	ft_search(PhoneBook *phonebook)
{
	std::string	buf, first_name, last_name, surname;
	int		index;

	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < 8; i++) {
		first_name = (*phonebook).get_first_name(i);
		last_name = (*phonebook).get_last_name(i);
		surname = (*phonebook).get_surname(i);
		check_size(&first_name, &last_name, &surname);
		std::cout << std::setw(10) << (i + 1) << "|" << std::setw(10) << first_name << "|" << std::setw(10)
				<< last_name << "|" << std::setw(10) << surname << std::endl;
	}
	buf = get_user_info("Enter a contact index: ");
	index = atoi(buf.c_str());
	if (index <= 0 || index > 8 )
		std::cout << "\nInvalid index..\n";
	else
		(*phonebook).print_contact(index - 1);
	std::cout << std::endl;
	return ;
		
}

int	main()
{
	std::string	buf;
	int		i = 0;
	PhoneBook phonebook;
	
	while (1)
	{
		std::cout << "Enter a command [ADD, SEARCH, EXIT]:\n> ";
		getline(std::cin, buf);
		if (buf == "ADD") {
			if (i >= 8)
				i = 0;
			if (ft_add(&phonebook, i))
				std::cout << "\nIncomplete contact, abort..\n" << std::endl;
			i += 1;
		}
		else if (buf == "SEARCH")
			ft_search(&phonebook);
		else if (buf == "EXIT")
			break ;
		else
				std::cout << "\nOnly ADD/ SEARCH/ EXIT command accepted!\n" << std::endl;
	}
	return (0);
}