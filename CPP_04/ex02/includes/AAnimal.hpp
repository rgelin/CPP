/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:04:28 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/18 14:05:02 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal const &src);
		virtual ~AAnimal();
		
		AAnimal &operator=(AAnimal const &src);

		void	setType(std::string type);
		std::string	getType(void) const;

		virtual void	makeSound() const = 0;
};

#endif