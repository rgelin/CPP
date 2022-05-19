/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:01:23 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/19 21:16:09 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	std::cout << "----Constructor----" << std::endl;
	try {
		Bureaucrat bob("bob", 155);
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		Bureaucrat fred("fred", -50);
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	

	
	std::cout << "----Exception----" << std::endl;
	
	try {
		Bureaucrat bob("bob", 150);
		bob.decrementGrade();
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat fred("fred", 1);
		fred.incrementGrade();
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	

	
	std::cout << "----Sign----" << std::endl;
	
	Bureaucrat		bob("bob", 150), fred("fred", 2);
	std::cout << std::endl;
	Form			form1("form1", 150, 150), form2("form2", 1, 1), form3("form3", 4, 4);
	
	std::cout << std::endl;
	std::cout << form1;
	std::cout << form2;
	try {		
		std::cout << std::endl;
		bob.signForm(form2);
		bob.signForm(form1);
		bob.signForm(form1);
		std::cout << std::endl;

		std::cout << form1;
		std::cout << form2;
		std::cout << form3;
		
		std::cout << std::endl;
		fred.signForm(form1);
		fred.signForm(form2);
		fred.signForm(form3);
		std::cout << std::endl;
		
		std::cout << form1;
		std::cout << form2;
		std::cout << form3;
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << "----Destructor----" << std::endl;
	
	return (0);
	//-------------------------------------------------------	
}