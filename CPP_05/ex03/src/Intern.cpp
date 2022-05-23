/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:32:41 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/23 14:32:51 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern() {
	std::cout << "An intern is created." << std::endl;
}

Intern::Intern(Intern const &src) {
	std::cout << "An intern is created by copy." << std::endl;
	*this = src;
}

Intern::~Intern() {
	std::cout << "An intern is destroyed." << std::endl;
}

Intern	&Intern::operator=(Intern const &src) {
	if (this != &src)
		*this = src;
	return *this;
}

static Form	*create_shrub(std::string const &target) {
	return (new ShrubberyCreationForm(target));
}

static Form	*create_robotomy(std::string const &target) {
	return (new RobotomyRequestForm(target));
}

static Form	*create_presi(std::string const &target) {
	return (new PresidentialPardonForm(target));
}


Form	*Intern::makeForm(std::string const &form_name, std::string const &target) {
	std::string forms[3] = {"Shrubbery", "Robotomy", "Presidential"};
	Form	*(*fct[3])(std::string const &target) = {create_shrub, create_robotomy, create_presi};
	
	for (int i = 0; i < 3; i++) {
		if (forms[i] == form_name) {
			std::cout << "Intern creates " + forms[i] + " form" << std::endl;;
			return fct[i](target);
		}
	}
	throw (Intern::InvalidFormNameException());
	return NULL;

}
	
const char* Intern::InvalidFormNameException::what() const throw() {
	return "Invalid form name!";
}