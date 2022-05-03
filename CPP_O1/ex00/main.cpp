/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:24:57 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/03 14:03:45 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	stack_zombie("Ninja");
	Zombie	*heap_zombie = newZombie("Alphonse");

	randomChump("Lolilol");
	(void) heap_zombie;
	// system("leaks zombie");
	delete heap_zombie;
	return (0);
}