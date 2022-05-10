/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:09:46 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/09 13:36:38 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int					_n;
		static const int	_bit = 8;

	public:
		Fixed(void);								//canonical
		Fixed(Fixed const &src);					//canonical
		~Fixed();									//canonical
		Fixed	&operator=(Fixed const &src);		//canonical
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
} ;

#endif