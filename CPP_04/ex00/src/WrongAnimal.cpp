/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:25:38 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/17 15:48:53 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Default") {
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &src) {
	if (this != &src) {
		(this->_type) = src.getType();
	}
	return *this;
}

void	WrongAnimal::setType(std::string type) {
	this->_type = type;
}

std::string	WrongAnimal::getType(void) const {
	return (this->_type);
}

void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound!" << std::endl;
}