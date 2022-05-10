/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:09:16 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/09 20:50:17 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destuctor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const nbr) : _val(nbr) {
	std::cout << "Int constructor called" << std::endl;
}


Fixed	&Fixed::operator=(Fixed const &src) {
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &src) 
		this->_val = src.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawbits member function called" << std::endl;
	return (this->_val);
}

void	Fixed::setRawBits(int const rawBits) {
	std::cout << "setRawbits member function called" << std::endl;
	this->_val = rawBits;
}

float	Fixed::toFloat(void) const {
	return ((float) this->_val);
}

int		Fixed::toInt(void) const {
	return (this->_val);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &src) {
	o << src.toFloat();
	return o;
}

Fixed::Fixed(float const nbr) {
	this->_val = roundf(nbr ) ;
	std::cout << "Float constructor called" << std::endl;
}
/*Takes two numbers, left shifts the bits of the first operand, 
the second operand decides the number of places to shift.
Or in other words left shifting an integer “x” with an integer “y” denoted
as ‘(x<<y)’ is equivalent to multiplying x with 2^y (2 raised to power y).

eg: lets take N=22; which is 00010110 in Binary Form.

Now, if “N is left-shifted by 2” i.e N=N<<2 then N will become N=N*(2^2).
Thus, N=22*(2^2)=88 which can be wriiten as 01011000.


N=N>>2 then N will become N=N/(2^2).
N=N<<2 then N will become N=N*(2^2).

nbr << bit 
nbr = nbr * (8 ^ 8);
https://www.youtube.com/watch?v=bDkR-OQiWx0
*/