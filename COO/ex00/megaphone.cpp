/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:35:10 by rgelin            #+#    #+#             */
/*   Updated: 2022/04/14 15:56:33 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

using namespace std;

class Megaphone
{
	public:
		void	print_to_upper(char *str)
		{
			int	i;
			
			i = -1;
			if (!str)
				return;
			while (str && str[++i])
				cout << (char)toupper(str[i]);
		}
};

int	main(int ac, char *av[])
{
	int	i;
	Megaphone upper;
	i = 0;
	if (ac == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (0);
	}
	while (++i < ac)
		upper.print_to_upper(av[i]);
	cout << endl;
}
