/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:55:16 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/21 15:26:47 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form() : _name("Default"), _sign(false), _w(150), _x(150) {
	std::cout << "Form " << this->_name << " is created." << std::endl;
	
}

Form::Form(std::string name, int w, int x) : _name(name), _sign(false) {
	if (w > 150 || x > 150)
		throw (Form::GradeTooLowException());
	else if (w < 1 || x < 1)
		throw (Form::GradeTooHighException());
	else {
		this->_x = x;
		this->_w = w;
		std::cout << "Form \"" << this->_name << "\" is created with a sign_grade(" << this->_w << ") and a execution_grade("
					<< this->_x << ")." << std::endl;
	}	
}

Form::Form(Form const &src) : _name(src.getName()), _sign(src.getSigned()), _w(src.getWGrade()), _x(src.getXGrade()) {
	std::cout << "Form " << this->_name << " is created by copy." << std::endl;
}

Form::~Form() {
	std::cout << "Form " +  this->_name + " is destroyed." << std::endl;
}

Form	&Form::operator=(Form const &src) {
	if (this != &src) {
		this->_name = src.getName();
		this->_sign = src.getSigned();
		this->_w = src.getWGrade();
		this->_x = src.getXGrade();
	}
	return *this;
}

std::string		Form::getName() const {
	return this->_name;
}

bool			Form::getSigned() const {
	return this->_sign;
}

int				Form::getWGrade() const {
	return this->_w;
}

int				Form::getXGrade() const {
	return this->_x;
}

void		Form::setSigned(bool sign) {
	this->_sign = sign;
}

void	Form::beSigned(Bureaucrat const &src) {
	if (this->_sign == true) {
		throw(Form::AlreadySignedException());
		// std::cout << "Form " << this->_name << " is already signed." << std::endl;
	}
	else if (src.getGrade() > this->_w)
		throw(Form::SignGradeTooLow());
	else {
		this->_sign = true;
		std::cout << "Bureaucrat " << src.getName() << " signs \"" << this->_name << "\"." << std::endl;
	}
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade too low! Minimum grade is 150.";
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade too high! Minimum grade is 1";
}

const char* Form::AlreadySignedException::what() const throw() {
	return "Form is already signed.";
}

const char* Form::NotSignedException::what() const throw() {
	return "Form isn't signed.";
}

const char* Form::SignGradeTooLow::what() const throw() {
	return "Bureaucrat sign_grade too low!";
}

const char* Form::ExecuteGradeTooLow::what() const throw() {
	return "Bureaucrat execute_grade too low!";
}

std::ostream	&operator<<(std::ostream &o, Form const &src) {
	std::string sign;
	if (!src.getSigned())
		sign = " isn't signed.";
	else
		sign = " is signed.";
	o << "Form " << "\"" + src.getName() + "\"" << sign << " Need " << src.getWGrade() << " grade to be signed and "
					<< src.getXGrade() << " to be execute." << std::endl;
	return o;
}