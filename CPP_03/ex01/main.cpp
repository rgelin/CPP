/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:33:29 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/13 00:39:43 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	clap("Ninja");
	ScavTrap	scav("GG");
	
	clap.attack("GG");
	scav.takeDamage(2);
	clap.setDamage(5);
	clap.attack("GG");
	scav.takeDamage(10);
	scav.beRepaired(5);
	scav.attack("Ninja");
	clap.takeDamage(10);
	scav.guardGate();
	return (0);
}