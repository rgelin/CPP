/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:44:43 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/12 15:46:51 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _life(10), _energy(10), _damage(0) {
	std::cout << "ClapTrap " << this->_name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void) {
	std::cout << this->_name << " ClapTrap is destroyed" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &src) {
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &src) {
		this->_name = src.getName();
		this->_life = src.getLife();
		this->_energy = src.getEnergy();
		this->_damage = src.getDamage();
	}
	return *this;
}

void	ClapTrap::setName(std::string name) {
	this->_name = name;
}

void	ClapTrap::setLife(int amount) {
	this->_life = amount;
}

void	ClapTrap::setEnergy(int amount) {
	this->_energy = amount;
}

void	ClapTrap::setDamage(int amount) {
	this->_damage = amount;
}

std::string	ClapTrap::getName(void) const {
	return this->_name;
}

int			ClapTrap::getLife(void) const {
	return this->_life;
}

int			ClapTrap::getEnergy(void) const {
	return this->_energy;
}

int			ClapTrap::getDamage(void) const {
	return this->_damage;
}

void 	ClapTrap::attack(const std::string& target) {
	if (this->_life > 0) {
		if (this->_energy > 0) {
			this->_energy -= 1;
			std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " point of damage!" << std::endl;
			std::cout << "It has cost 1 energy. " << this->_name << " has now " << this->_energy << " energy points." << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->_name << " has no more energy to attack!" << std::endl;
			
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't attack. He is already dead!" << std::endl;
}

void 	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_life > 0) {
		this->_life -= amount;
		if (this->_life <= 0)
			std::cout << this->_name << " is dead..." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't take damage. He is already dead!" << std::endl;
}

void 	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_life > 0) {
		if (this->_energy > 0) {
			this->_life += amount;
			this->_energy -= 1;
			std::cout << this->_name << " gains " << amount << " HP. His life is now " << this->_life << " HP." << std::endl;
			std::cout << "It has cost 1 energy. " << this->_name << " has now " << this->_energy << " energy points." << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->_name << " has no more energy to be repaired!" << std::endl;
			
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't be repaired. He is already dead!" << std::endl;
}