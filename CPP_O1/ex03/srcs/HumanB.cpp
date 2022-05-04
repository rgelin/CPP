/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:57:35 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/03 22:55:19 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

/*
	int	a = 5;
	int	*ptr = &a;
	int &ref = a;

	Weapon weapon = ...;
	*_weapon = &a;
*/

HumanB::HumanB(std::string name) : _name(name) {
	this->_weapon = NULL;
}

HumanB::~HumanB() {
	
}

void	HumanB::attack() const {
	
	if (this->_weapon)
		std::cout << this->_name << " attack with his " << (*_weapon).getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon, dead is nearby!" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
		this->_weapon = &weapon; //*ptr = &a;
}
