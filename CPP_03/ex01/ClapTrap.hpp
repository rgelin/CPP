/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:33:11 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/12 16:42:20 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	protected:
			std::string	_name;
			int			_life;
			int			_energy;
			int			_damage;

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();
		
		ClapTrap &operator=(ClapTrap const &src);

		void	setName(std::string name);
		void	setLife(unsigned int amount);
		void	setEnergy(unsigned int amount);
		void	setDamage(unsigned int amount);

		std::string	getName(void) const;
		int			getLife(void) const;
		int			getEnergy(void) const;
		int			getDamage(void) const;

		void 	attack(const std::string& target);
		void 	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);
};

#endif