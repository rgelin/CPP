/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:04:28 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/16 16:15:05 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &src);
		virtual ~Animal();
		
		Animal &operator=(Animal const &src);

		void	setType(std::string type);
		std::string	getType(void) const;

		virtual void	makeSound() const;
};

#endif