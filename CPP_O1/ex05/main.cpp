/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:14:54 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/04 16:28:03 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int		main()
{
	Harl	bot;

	bot.complain("debug");
	bot.complain("info");
	bot.complain("warning");
	bot.complain("error");
}