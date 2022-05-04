/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:42:26 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/03 22:42:08 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class	HumanB {

	private:
		std::string	_name;
		Weapon		*_weapon;
		
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon &weapon);
};

#endif