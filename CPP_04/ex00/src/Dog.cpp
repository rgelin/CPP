/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:48:40 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/17 15:47:47 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(Dog const &src) {
	std::cout << "Dog copy constructor called." << std::endl;
	*this = src;
}

Dog::~Dog() {
	std::cout << "Dog destructor called." << std::endl;
}

Dog & Dog::operator=(Dog const &src) {
	if (this != &src) {
		(this->_type) = src.getType();
	}
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Wouf Wouf!" << std::endl;
}
