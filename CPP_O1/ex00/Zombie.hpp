/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:27:55 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/02 14:45:57 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIES_H
# define ZOMBIES_H

#include <iostream>

class Zombie {
	
	private:
		std::string _name;
		
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void) const;
};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif
