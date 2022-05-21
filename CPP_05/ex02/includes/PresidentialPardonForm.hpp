/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:35:07 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/21 15:07:18 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_H
# define PresidentialPardonForm_H

#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string	_target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm();

		PresidentialPardonForm	&operator=(PresidentialPardonForm const &src);

		std::string		getTarget() const;
		void			setTarget(std::string target);
		void			execute(Bureaucrat const &src) const;
};

#endif