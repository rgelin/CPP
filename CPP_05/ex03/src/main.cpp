/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:01:23 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/23 14:42:49 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"
#include "unistd.h"

int	main()
{	
	std::cout << "----Constructors----" << std::endl;
	
	try {
		
		Bureaucrat		bob("bob", 150), fred("fred", 1);
		std::cout << std::endl;
		Intern		intern;
		std::cout << std::endl;
		
		Form	*shrub;
		Form	*robo;
		Form	*presi;
		Form	*wrong_form;
		
		shrub = intern.makeForm("Shrubbery", "Garden");
		robo = intern.makeForm("Robotomy", "Fred");
		presi = intern.makeForm("Presidential", "Fred");
		std::cout << std::endl;
		
		try {
			wrong_form = intern.makeForm("wrong_form", "Fred");
		}
		catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
		std::cout << std::endl;
		
		std::cout << "----Status----" << std::endl;
		std::cout << *shrub;
		std::cout << *robo;
		std::cout << *presi;
		std::cout << std::endl;
		
		std::cout << "----Sign Form----" << std::endl;
		std::cout << "Bob: " << std::endl;
		bob.signForm(*shrub);
		bob.signForm(*robo);
		bob.signForm(*presi);
		std::cout << std::endl;
		
		std::cout << "----Status----" << std::endl;
		std::cout << *shrub;
		std::cout << *robo;
		std::cout << *presi;
		std::cout << std::endl;
		
		std::cout << "Fred: " << std::endl;
		fred.signForm(*shrub);
		fred.signForm(*robo);
		fred.signForm(*presi);
		std::cout << std::endl;
		
		std::cout << "----Status----" << std::endl;
		std::cout << *shrub;
		std::cout << *robo;
		std::cout << *presi;
		std::cout << std::endl;
		
		std::cout << "----Execute Form----" << std::endl;
		std::cout << "Bob: " << std::endl;
		bob.executeForm(*shrub);
		bob.executeForm(*robo);
		bob.executeForm(*presi);
		std::cout << std::endl;
		
		std::cout << "Fred: " << std::endl;
		fred.executeForm(*shrub);
		std::cout << std::endl;
		fred.executeForm(*robo);
		std::cout << std::endl;
		usleep(1000000);
		fred.executeForm(*robo);
		std::cout << std::endl;
		fred.executeForm(*presi);
		std::cout << std::endl;
		
		std::cout << "----Destructor----" << std::endl;
		delete shrub;
		delete robo;
		delete presi;
	}
	catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}	
	
	return (0);
	//-------------------------------------------------------	
}