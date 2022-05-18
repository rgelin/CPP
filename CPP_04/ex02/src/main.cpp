/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:37:59 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/18 14:11:27 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int	main()
{
	std::cout << "-------------Animal-------------" << std::endl;
	// const AAnimal* animal = new AAnimal();
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();
	
	std::cout << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	// animal->makeSound();
	std::cout << std::endl;
	
	// delete animal;
	delete dog;
	delete cat;
	return (0);
}