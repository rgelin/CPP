/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:33:29 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/12 15:43:59 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	bot1("Ninja");
	ClapTrap	bot2("Alphonse");

	bot1.attack("Alphonse");
	bot2.takeDamage(4);
	bot2.beRepaired(2);
	bot2.attack("Ninja");
	bot1.takeDamage(8);
	bot1.beRepaired(2);
	
	bot2.attack("Ninja");
	bot1.takeDamage(8);
	bot1.beRepaired(2);
}