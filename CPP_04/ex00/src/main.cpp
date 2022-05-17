/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:37:59 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/16 16:45:30 by rgelin           ###   ########.fr       */
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
	return (0);
}