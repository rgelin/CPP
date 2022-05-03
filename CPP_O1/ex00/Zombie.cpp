/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:25:48 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/02 14:55:18 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::Zombie(std::string name) : _name(name) {
	announce();
}

Zombie::~Zombie() {
	std::cout << this->_name << " is definitly dead!" << std::endl; 
}

void Zombie::announce (void) const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}