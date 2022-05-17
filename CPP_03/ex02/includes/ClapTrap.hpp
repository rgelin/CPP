/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:33:11 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/13 02:14:31 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	protected:
			std::string		_name;
			std::string		_className;
			unsigned int	_life;
			unsigned int	_energy;
			unsigned int	_damage;

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();
		
		ClapTrap &operator=(ClapTrap const &src);

		void	setName(std::string name);
		void	setLife(unsigned int amount);
		void	setEnergy(unsigned int amount);
		void	setDamage(unsigned int amount);

		std::string		getName(void) const;
		unsigned int	getLife(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getDamage(void) const;

		void 	attack(const std::string& target);
		void 	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);
};

#endif