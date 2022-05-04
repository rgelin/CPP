/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:25:14 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/03 16:08:35 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	
}

Weapon::~Weapon() {
	
}

//A reference is constante --> we return then a "const string"
std::string const &Weapon::getType() const {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}