/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:22:01 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/03 16:12:02 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
	
	private:
		std::string _type;
		
	public:
		Weapon(std::string type);
		~Weapon();
		std::string	const	&getType() const;
		void				setType(std::string type);
} ;

#endif