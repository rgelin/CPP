/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:27:18 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/23 01:14:24 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
	public:
		Intern();
		Intern(Intern const &src);
		~Intern();

		Intern	&operator=(Intern const &src);

		class InvalidFormNameException : public std::exception {
			virtual const char* what() const throw ();
		};
		
		Form	*makeForm(std::string const &form_name, std::string const &target);
};

		// Form	*create_shrub(std::string const &target);
		// Form	*create_robotomy(std::string const &target);
		// Form	*create_presi(std::string const &target);

#endif