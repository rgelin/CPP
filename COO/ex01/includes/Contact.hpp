/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:52:40 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/21 14:49:22 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

using namespace std;

class Contact {
	
	private:
		string	_first_name;
		string	_last_name;
		string	_surname;
		string	_phone;
		string	_secret;

	public:
		Contact();
		~Contact();
		void	set_contact_values(string _f, string _l, string _s, string _p, string _sec);
		string	get_first_name(void);
		string	get_last_name(void);
		string	get_surname(void);
		string	get_phone(void);
		string	get_secret(void);
};

#endif