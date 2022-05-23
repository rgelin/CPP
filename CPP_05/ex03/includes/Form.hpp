/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:40:00 by rgelin            #+#    #+#             */
/*   Updated: 2022/05/23 13:39:58 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include "../includes/Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string	_name;
		bool		_sign;
		int			_w;
		int			_x;
		
	public:
		Form();
		Form(std::string name, int w, int x);
		Form(Form const &src);
		virtual ~Form();

		Form	&operator=(Form const &src);

		std::string		getName() const;
		bool			getSigned() const;
		int				getWGrade() const;
		int				getXGrade() const;
		void			setSigned(bool sign);

		void			beSigned(Bureaucrat const &src);
		virtual void	execute(Bureaucrat const &src) const = 0;
		
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};

		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};

		class AlreadySignedException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		
		class NotSignedException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		
		class SignGradeTooLow: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		
		class ExecuteGradeTooLow: public std::exception {
			public:
				virtual const char* what() const throw();
		};
	
};

std::ostream	&operator<<(std::ostream &o, Form const &src);

#endif