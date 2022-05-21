/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:52:51 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/21 16:01:34 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm() : Form("Default_Shrubbery", 145, 137) {
	this->_target = "Default";
	std::cout << "Shrubbery_Form \"" + this->getName() + "\" is created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery_Form", 145, 137) {
	this->_target = target;
	std::cout << "Shrubbery_Form \"" + this->getName() + "\" is created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src.getName(), src.getWGrade(), src.getXGrade()) {
	this->_target = src.getTarget();
	std::cout << "Shrubbery_Form \"" + this->getName() + "\" created by copy." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Shrubbery_Form \"" + this->getName() + "\" destroyed." << std::endl;
}

ShrubberyCreationForm	& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) {
	if (this != &src)
		this->_target = src.getTarget();
	return *this;
}

std::string		ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void			ShrubberyCreationForm::setTarget(std::string target) {
	this->_target = target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &src) const {
	std::string	tree = 
		"     ccee88oo          \n"
		"  C8O8O8Q8PoOb o8oo    \n"
		" dOB69QO8PdUOpugoO9bD  \n"
		"CgggbU8OU qOp qOdoUOdcb\n"
		"   6OuU  /p u gcoUodpP \n"
		"      \\\\//  /douUP   \n"
		"        \\\\////       \n"
		"         |||/\\        \n"
		"         |||\\/        \n"
		"         |||||         \n"
		"  .....\\//||||\\....  \n";
	
	if (!this->getSigned())
		throw (Form::NotSignedException());
	else if (src.getGrade() > this->getXGrade())
		throw (Form::ExecuteGradeTooLow());
	else {
		std::ofstream file(this->_target + "_shrubbery");
		
		if (file.is_open()) {
			file << tree;
			std::cout << "Bureaucrat " + src.getName() + " execute " + this->getName() + "." << std::endl;;
		}
		else
			std::cout << "Error: couldn't open file." << std::endl;;
	}
	
}
