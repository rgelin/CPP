/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:31:12 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/03 14:37:58 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name) {
	Zombie	*zombieHorde = new Zombie[n];
	
	for (int i = 0; i < n; i++)
	{
		zombieHorde[i].set_name(name);
		zombieHorde[i].announce();
	}
	return &(zombieHorde[0]);
}