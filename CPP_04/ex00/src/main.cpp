/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:37:59 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/17 15:40:26 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int	main()
{
	{
		std::cout << "-------------Animal-------------" << std::endl;
		const Animal* animal = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		
		std::cout << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		cat->makeSound(); //will output the cat sound!
		dog->makeSound();
		animal->makeSound();
		std::cout << std::endl;
		
		delete animal;
		delete dog;
		delete cat;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		std::cout << "-------------WrongAnimal-------------" << std::endl;
		const WrongAnimal* wrong_animal = new WrongAnimal();
		const WrongAnimal* wrong_cat = new WrongCat();
		
		std::cout << std::endl;
		std::cout << wrong_cat->getType() << " " << std::endl;
		wrong_cat->makeSound(); //will output the wrong_cat sound!
		wrong_animal->makeSound();
		std::cout << std::endl;
		
		delete wrong_animal;
		delete wrong_cat;
		
	}
		std::cout << std::endl;
		std::cout << std::endl;
	{
		
		std::cout << "-------------More tests-------------" << std::endl;
		Dog	alphonse;
		std::cout << std::endl;
		Cat	ninja;
		
		std::cout << std::endl;

		// Dog	&alphonse_ref = alphonse;
		// std::cout << std::endl;
		// Cat	&ninja_ref = ninja;

		std::cout << std::endl;
		
		Dog	alphonse_cpy(alphonse);
		std::cout << std::endl;
		Cat	ninja_cpy(ninja);
		// const Animal 	*unkown = Dog(django);

		std::cout << std::endl;
		std::cout << std::endl;
		(void)ninja;
		(void)alphonse;
		// (void)ninja_ref;
		// (void)alphonse_ref;
		(void)alphonse_cpy;
		(void)ninja_cpy;
	}
		std::cout << std::endl;
		std::cout << std::endl;
	system("leaks ex00");
	return (0);
}