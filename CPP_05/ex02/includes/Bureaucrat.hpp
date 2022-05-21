/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:30:39 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/21 15:38:18 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include "../includes/Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string		_name;
		int				_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();

		Bureaucrat	&operator=(Bureaucrat const &src);

		void	setName(std::string const name);
		void	setGrade(int grade);
		void	incrementGrade();
		void	decrementGrade();
		
		std::string		getName() const;
		int				getGrade() const;

		void	signForm(Form &src);
		void	executeForm(Form const &src) const;

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	
	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src);

#endif