/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:08:07 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/02 16:36:20 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	
	private :
		const std::string name;
		bool    BoolNumber;
		const int NumberTosignedForm;
		const int NumberToexecuteForm;
	
	public :
		Form();
		Form(std::string name, const int numE, const int numS);
		~Form();
		Form(const Form& new_obj);
		const std::string		getName() const;
		bool					getBoolNumber() const;
		int 					getNumbertTosignedForm() const;
		int 					getNumberToexecuteForm() const;
		void					beSigned(Bureaucrat buraucrat) ;
		virtual void            execute(Bureaucrat const & executor) const = 0;
		class   GradeTooHighException : public std::exception {
			public :
				const char * what() const throw();
		};
		class   GradeTooLowException : public std::exception {
			public :
				const char * what() const throw();
		};
};

std::ostream & operator << (std::ostream &out , Form const & old_obj);

#endif