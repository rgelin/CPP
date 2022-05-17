/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:20:37 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/16 16:39:05 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal() : _type("Default") {
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(Animal const &src) {
	std::cout << "Animal copy constructor called." << std::endl;
	*this = src;
}

Animal::~Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

Animal & Animal::operator=(Animal const &src) {
	std::cout << "Animal assignation called." << std::endl;
	if (this != &src) {
		(this->_type) = src.getType();
	}
	return *this;
}

void	Animal::setType(std::string type) {
	this->_type = type;
}

std::string	Animal::getType(void) const {
	return (this->_type);
}

void	Animal::makeSound() const {
	std::cout << "Animal sound!" << std::endl;
}
