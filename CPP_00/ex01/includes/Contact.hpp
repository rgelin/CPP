/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:52:40 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/02 14:03:20 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class Contact {
	
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_surname;
		std::string	_phone;
		std::string	_secret;

	public:
		Contact();
		~Contact();
		void	set_contact_values(std::string _f, std::string _l, std::string _s, std::string _p, std::string _sec);
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_surname(void) const;
		std::string	get_phone(void) const;
		std::string	get_secret(void) const;
};

#endif