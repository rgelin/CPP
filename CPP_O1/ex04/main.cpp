/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:55:04 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/04 15:45:59 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	p_error(std::string msg)
{
	std::cerr << msg << std::endl;
	return (1);
}

int	main(int ac, char *av[])
{
	std::ifstream	file;
	std::ofstream	outFile;
	std::string		buf;
	std::string		file_name;
	
	if (ac != 4)
		return (p_error("Error: arguments"));
	file_name = av[1];
	file.open(file_name);
	outFile.open(file_name += ".replace");
	if (file.fail())
		return (p_error("Error: open file"));
	while (!file.eof()) {
		file >> buf;
		if (buf == av[2])
			outFile << av[3] << std::endl;
		else if (!file.eof())
			outFile << buf << std::endl;
	}
	file.close();
	outFile.close();
	return (0);	
}