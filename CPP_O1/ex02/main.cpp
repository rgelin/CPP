/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:04:35 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/03 15:15:06 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str("HI THIS IS BRAIN");
	std::string *str_ptr = &str;
	std::string &str_ref = str;

	std::cout << "String adress: " << &str << std::endl; 
	std::cout << "String ptr adress: " << &(*str_ptr) << std::endl; 
	std::cout << "String ref adress: " << &(str_ref) << std::endl << std::endl;

	std::cout << "String value: " << str << std::endl; 
	std::cout << "String ptr value: " << *str_ptr << std::endl; 
	std::cout << "String ref value: " << str_ref << std::endl;
	
	return (0);
}