/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:37:59 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/17 18:16:07 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include <cstdio>

int	main()
{
	std::cout << "-------------Dymamic allocation-------------" << std::endl << std::endl;
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << std::endl;
	std::cout << "-------------Dymamic destruction-------------" << std::endl << std::endl;
	delete dog;
	delete cat;
	std::cout << std::endl;
	std::cout << "-------------Static allocation-------------" << std::endl << std::endl;

	Dog	alphonse;
	std::cout << std::endl;
	Cat	ninja;

	Dog	&alphonse_ref = alphonse;
	std::cout << std::endl;
	Cat	&ninja_ref = ninja;
	std::cout << std::endl;
	
	Dog	alphonse_cpy(alphonse);
	std::cout << std::endl;
	Cat	ninja_cpy(ninja);
	std::cout << std::endl;
	
	std::cout << "-------------Adress comparasion-------------" << std::endl << std::endl;
	std::cout << "Alphonse adress: " << &alphonse << std::endl;
	std::cout << "Alphonse ref adress: " << &alphonse_ref << std::endl;
	std::cout << "Alphonse copy adress: " << &alphonse_cpy << std::endl;
	std::cout << std::endl;
	std::cout << "Ninja adress: " << &ninja << std::endl;
	std::cout << "Ninja ref adress: " << &ninja_ref << std::endl;
	std::cout << "Ninja copy adress: " << &ninja_cpy << std::endl;
	std::cout << std::endl;
	
	std::cout << "-------------Animal array-------------" << std::endl << std::endl;

	const Animal	*(array[4]);
	
	for (int i = 0; i < 2; i++) {
		array[i] = new Dog();
		std::cout << std::endl;
	}
	for (int i = 2; i < 4; i++) {
		array[i] = new Cat();
		std::cout << std::endl;
	}
	for (int i = 0; i < 4; i++) {
		delete array[i];
		std::cout << std::endl;
	}
	
	std::cout << "-------------Leaks-------------" << std::endl << std::endl;
	
	std::cout << std::endl;
	system ("leaks ex01");
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "-------------Static destruction-------------" << std::endl << std::endl;
	return (0);
}