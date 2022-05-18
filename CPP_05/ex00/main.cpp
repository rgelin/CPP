/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:01:23 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/18 16:35:54 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "------------Constructor------------" << std::endl;
	try {
		Bureaucrat	bob("bob", 155);
	}
	catch (std::exception &e) {
		std::cout << "Error: exception!" << std::endl;
	}
	
	try {
		Bureaucrat	fred("fred", 0);
	}
	catch (std::exception &e) {
		std::cout << "Error: exception!" << std::endl;
	}
	
	try {
		Bureaucrat	ninja("ninja", 56); //pourquoi c'est destroy direct avec le try ? 
	}
	catch (std::exception &e) {
		std::cout << "Error: exception!" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "----Incre/decre and overload <<----" << std::endl;
	Bureaucrat	bob("bob", 1);

	try {
		bob.incrementGrade();
	}
	catch (std::exception &e) {
		std::cout << "Error: exception!" << std::endl;
	}
	bob.decrementGrade();
	std::cout << bob;
	
	std::cout << std::endl;
	Bureaucrat	fred("fred", 150);
	
	try {
		fred.decrementGrade();
	}
	catch (std::exception &e) {
		std::cout << "Error: exception!" << std::endl;
	}
	fred.incrementGrade();
	std::cout << fred;
	std::cout << std::endl;
	std::cout << "------------Destructor------------" << std::endl;
	return 0;
}