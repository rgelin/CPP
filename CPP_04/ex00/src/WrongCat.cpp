/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:29:38 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/17 15:48:03 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) {
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = src;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const &src) {
	if (this != &src) {
		(this->_type) = src.getType();
	}
	return *this;
}
