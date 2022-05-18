/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:29:04 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/17 17:47:07 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
	private:
		std::string		*_ideas;

	public:
		Brain();
		Brain(Brain const &src);
		~Brain();

		Brain	&operator=(Brain const &src);
		
		std::string		*getIdeas(void) const;
};

#endif