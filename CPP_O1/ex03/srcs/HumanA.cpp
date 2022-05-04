/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:44:16 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/03 22:46:01 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

/*
	int	a = 5;
	int	*ptr = &a;
	int &ref = a;

	Weapon weapon = ...;
	*_weapon = &a;
	&_weapon = a;
*/

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	
}

HumanA::~HumanA() {
	
}

void	HumanA::attack() const {
	std::cout << this->_name << " attack with his " << _weapon.getType() << std::endl;
}
