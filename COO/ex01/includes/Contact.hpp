/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:52:40 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/29 13:31:32 by rgelin           ###   ########.fr       */
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
		string	get_first_name(void) const;
		string	get_last_name(void) const;
		string	get_surname(void) const;
		string	get_phone(void) const;
		string	get_secret(void) const;
};

#endif