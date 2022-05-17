/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:46:26 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/16 16:09:09 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(Cat const &src) {
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << "Cat destructor called." << std::endl;
}

Cat & Cat::operator=(Cat const &src) {
	std::cout << "Cat assignation called." << std::endl;
	if (this != &src) {
		(this->_type) = src.getType();
	}
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Miaouuuu!" << std::endl;
}