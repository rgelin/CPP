/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:15:04 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/02 14:07:04 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

class Megaphone
{
	public:
		void	print_to_upper(char *str)
		{
			int	i;
			
			i = -1;
			if (!str)
			{
				std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
				return ;
			}
			while (str && str[++i])
				std::cout << (char)toupper(str[i]);
		}
};

int	main(int ac, char *av[])
{
	int	i;
	Megaphone upper;

	i = 0;
	if (ac == 1)
	{
		upper.print_to_upper(NULL);
		return (0);
	}
	while (++i < ac)
		upper.print_to_upper(av[i]);
	std::cout << std::endl;
	return (0);
}
