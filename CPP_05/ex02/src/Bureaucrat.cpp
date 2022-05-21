/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:31:32 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/21 15:38:10 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {
	std::cout << "Bureaucrat " << this->_name << " is created with a grade " << this->_grade << "." << std::endl;
	
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else {
		this->_grade = grade;
		std::cout << "Bureaucrat " << this->_name << " is created with a grade " << this->_grade << "." << std::endl;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName()), _grade(src.getGrade()) {
	std::cout << "Bureaucrat " << this->_name << " is created by copy." << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat " << this->_name << " is destroyed." << std::endl;
}

Bureaucrat	& Bureaucrat::operator=(Bureaucrat const &src) {			
	if (this != &src) {
		this->_name = src.getName();
		this->_grade = src.getGrade();
	}
	return *this;
}

void	Bureaucrat::setName(std::string const name) {
	this->_name = name;
}

void	Bureaucrat::setGrade(int grade) {
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else {
		this->_grade = grade;
		std::cout << "Bureaucrat " << this->_name << " new grade is " << this->_grade << "." << std::endl;
	}
}

void	Bureaucrat::incrementGrade() {
	if (this->_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else {
		this->_grade--;
		std::cout << "Bureaucrat " << this->_name << " new grade is " << this->_grade << "." << std::endl;
	}
		
}

void	Bureaucrat::decrementGrade() {
	if (this->_grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else {
		this->_grade++;
		std::cout << "Bureaucrat " << this->_name << " new grade is " << this->_grade << "." << std::endl;
	}
}

std::string		Bureaucrat::getName() const {
	return this->_name;
}

int				Bureaucrat::getGrade() const {
	return this->_grade;
}

void	Bureaucrat::signForm(Form &src) {
	try {
		src.beSigned(*this);
	}
	catch (std::exception &e) {
		std::cout << "Bureaucrat " << this->_name << " coudln't sign " << src.getName() << " form because: " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &src) const {
	try {
		src.execute(*this);
	}
	catch (std::exception &e) {
		std::cout << "Bureaucrat " << this->_name << " coudln't execute " << src.getName() << " form because: " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low! Minimum grade is 150.";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high! Maximum grade is 1.";
}

std::ostream	& operator<<(std::ostream &o, Bureaucrat const &src) {
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return o;
}
	