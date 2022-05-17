/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:01:46 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/12 17:31:17 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_life = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap " << this->_name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src.getName()) {
	*this = src;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap" << this->_name << " is destroyed" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &src) {
	if (this != &src) {
		this->_name = src.getName();
		this->_life = src.getLife();
		this->_energy = src.getEnergy();
		this->_damage = src.getDamage();
	}
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " Gate Keeper mode activated!" << std::endl;
}