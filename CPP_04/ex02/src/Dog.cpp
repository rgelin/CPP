/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:48:40 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/18 14:11:57 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
	std::cout << "Dog constructor called." << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(Dog const &src) {
	this->_type = src.getType();
	this->_brain = new Brain(*(src.getBrain()));
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog destructor called." << std::endl;
}

Dog & Dog::operator=(Dog const &src) {
	if (this != &src) {
		(this->_type) = src.getType();
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*(src.getBrain()));
	}
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Wouf Wouf!" << std::endl;
}

Brain	*Dog::getBrain(void) const {
	return this->_brain;;
}
