/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:09:46 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/09 20:44:21 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_val;
		static const int	_bit = 8;

	public:
		Fixed(void);								//canonical
		Fixed(Fixed const &src);					//canonical
		Fixed(int const nbr);
		Fixed(float const nbr);
		~Fixed();									//canonical
		Fixed	&operator=(Fixed const &src);		//canonical
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
} ;

std::ostream	&operator<<(std::ofstream &o, Fixed const &src);

#endif