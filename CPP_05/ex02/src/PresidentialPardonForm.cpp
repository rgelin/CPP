/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:35:57 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/21 16:20:44 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Default_Presidential_Pardon", 25, 5) {
	this->_target = "Default";
	std::cout << "Presidential Form \"" + this->getName() + "\" is created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential_Pardon", 25, 5) {
	this->_target = target;
	std::cout << "Presidential Form \"" + this->getName() + "\" is created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src.getName(), src.getWGrade(), src.getXGrade()) {
	this->_target = src.getTarget();
	std::cout << "PresidentialPardon_Form \"" + this->getName() + "\" created by copy." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardon_Form \"" + this->getName() + "\" is destroyed." << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
	if (this != &src) {
		this->_target = src.getTarget();
	}
	return *this;
}

std::string		PresidentialPardonForm::getTarget() const {
	return this->_target;
}

void			PresidentialPardonForm::setTarget(std::string target) {
	this->_target = target;
}

void			PresidentialPardonForm::execute(Bureaucrat const &src) const {
	if (!this->getSigned())
		throw (Form::NotSignedException());
	else if (src.getGrade() > this->getXGrade())
		throw (Form::ExecuteGradeTooLow());
	else {
		std::cout << "Bureaucrat " + src.getName() + " execute " + this->getName()+ "." << std::endl;
		std::cout << "Zaphod Beeblebrox forvgive " + this->_target + "." << std::endl;
	}
}
