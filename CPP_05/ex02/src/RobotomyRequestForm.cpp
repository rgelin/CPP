/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:34:22 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/21 16:02:30 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : Form("Default_Robotomy_Request", 72, 45) {
	this->_target = "Default";
	std::cout << "Robotomy Form \"" + this->getName() + "\" is created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy_Request", 72, 45) {
	this->_target = target;
	std::cout << "Robotomy Form \"" + this->getName() + "\" is created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src.getName(), src.getWGrade(), src.getXGrade()) {
	*this = src;
	std::cout << "Robotomy_Form \"" + this->getName() + "\" created by copy." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Robotomy_Form \"" + this->getName() + "\" destroyed." << std::endl;
}

RobotomyRequestForm	& RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {
	if (this != &src)
		this->_target = src.getTarget();
	return *this;
}

std::string		RobotomyRequestForm::getTarget() const {
	return this->_target;
}

void			RobotomyRequestForm::setTarget(std::string target) {
	this->_target = target;
}

void			RobotomyRequestForm::execute(Bureaucrat const &src) const {
	int nbr;
	
	(void)src;
	
	if (!this->getSigned())
		throw (Form::NotSignedException());
	else if (src.getGrade() > this->getXGrade())
		throw (Form::ExecuteGradeTooLow());
	else {
		srand(time(NULL));
		nbr = rand()%100;
		std::cout << "Bzzzzzzzzzz... ";
		if (nbr % 2 == 0)
			std::cout << this->_target + " has been robotized!" << std::endl;
		else
			std::cout << "robotomisation on " + this->_target + " failed.." << std::endl;
	}
}
