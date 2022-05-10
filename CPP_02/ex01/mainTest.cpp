/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:06:59 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/09 19:59:24 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <iostream>

int	main(void)
{
	int		Int = 5;
	float	Float = 3.5234343;
	
	//number = (sign ? -1:1) * 2^(exponent) * 1.(mantissa bits);
	//number = 2^..... * nbBits 

	std::cout << Int << std::endl;
	std::cout << roundf(Int) << std::endl;
	std::cout << Float << std::endl;
	std::cout << roundf(Float) << std::endl;

	Int = roundf(Float);
	std::cout << Int << std::endl;
	
	// Int = 3.5344;
	// std::cout << std::endl;
	// std::cout << std::endl;
	// std::cout << Int << std::endl;
	// std::cout << roundf(Int) << std::endl;
}