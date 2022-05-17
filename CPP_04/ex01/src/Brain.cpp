/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:33:34 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/17 17:51:15 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain() {
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = "Default idea";
	}
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(Brain const &src) {
	std::string		*src_ideas = src.getIdeas();
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = src_ideas[i] + "copy";
	}
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain::~Brain() {
	delete [] (this->_ideas);
	std::cout << "Brain destructor called." << std::endl;
}

Brain	& Brain::operator=(Brain const &src) {
	if (this != &src) {
		this->_ideas = src.getIdeas();
	}
	return *this;
}

std::string		*Brain::getIdeas(void) const {
	return this->_ideas;
}
