/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:33:12 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/21 15:07:26 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_H
# define RobotomyRequestForm_H

#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string	_target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm();

		RobotomyRequestForm	&operator=(RobotomyRequestForm const &src);
		
		std::string		getTarget() const;
		void			setTarget(std::string target);
		void			execute(Bureaucrat const &src) const;
};

#endif