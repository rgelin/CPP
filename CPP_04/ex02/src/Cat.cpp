/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:46:26 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/18 14:12:01 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : AAnimal("Cat") {
	std::cout << "Cat constructor called." << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const &src) {
	this->_type = src.getType();
	this->_brain = new Brain(*(src.getBrain()));
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat destructor called." << std::endl;
}

Cat & Cat::operator=(Cat const &src) {
	if (this != &src) {
		(this->_type) = src.getType();
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*(src.getBrain()));
	}
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Miaouuuu!" << std::endl;
}

Brain	*Cat::getBrain(void) const {
	return this->_brain;;
}