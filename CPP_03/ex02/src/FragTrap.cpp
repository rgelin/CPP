/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:52:43 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/13 02:18:05 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_className = "FragTrap";
	this->_life = 100;
	this->_energy = 50;
	this->_damage = 30;
	std::cout << this->_className << " " << this->_name << " constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src.getName()){
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << this->_className << " " << this->_name << " is destroyed" << std::endl;
	
}

		
FragTrap & FragTrap::operator=(FragTrap const &src) {
	if (this != &src) {
		this->_name = src.getName();
		this->_life = src.getLife();
		this->_energy = src.getEnergy();
		this->_damage = src.getDamage();
	}
	return *this;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << this->_className << " " << this->_name << " is making an high five!" << std::endl;
}
