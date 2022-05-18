/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:20:37 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/18 14:05:10 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal() : _type("Default") {
	std::cout << "AAnimal constructor called." << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type) {
	std::cout << "AAnimal constructor called." << std::endl;
}

AAnimal::AAnimal(AAnimal const &src) {
	std::cout << "AAnimal copy constructor called." << std::endl;
	*this = src;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called." << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const &src) {
	if (this != &src) {
		(this->_type) = src.getType();
	}
	return *this;
}

void	AAnimal::setType(std::string type) {
	this->_type = type;
}

std::string	AAnimal::getType(void) const {
	return (this->_type);
}
