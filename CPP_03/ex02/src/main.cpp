/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:33:29 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/13 02:21:28 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int	main()
{
	ClapTrap	clap("Ninja");
	ScavTrap	scav("GG");
	FragTrap	frag("Alphonse");
	
	std::cout << std::endl;
	std::cout << std::endl;
	clap.attack("GG");
	scav.takeDamage(2);
	std::cout << std::endl;
	std::cout << std::endl;
	clap.setDamage(5);
	clap.attack("GG");
	scav.takeDamage(10);
	scav.beRepaired(5);
	std::cout << std::endl;
	std::cout << std::endl;
	frag.attack("GG");
	scav.takeDamage(30);
	scav.beRepaired(5);
	std::cout << std::endl;
	std::cout << std::endl;
	scav.attack("Ninja");
	clap.takeDamage(10);
	std::cout << std::endl;
	std::cout << std::endl;
	clap.attack("Ninja");
	std::cout << std::endl;
	std::cout << std::endl;
	scav.guardGate();
	frag.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;
	
	
	return (0);
}