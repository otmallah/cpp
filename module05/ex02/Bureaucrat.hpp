/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:35:38 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/18 21:40:16 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

#include "./Form.hpp"

class Form;

class   Bureaucrat {
    
    private :
        const std::string name;
        int grade;
    
    public :
        Bureaucrat();
        Bureaucrat(const std::string name1, int numberGrade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& new_obj);
        Bureaucrat& operator = (const Bureaucrat& old_obj);
        std::string    getName() const;
        int     getGrade() const;
        void    increment();
        void    decrement();
        void    signForm(Form const & form);
        void    executeForm(Form const & form);
        class   GradeTooHighException : public std::exception {
            public :
                const char * what() const throw();
        };
        class   GradeTooLowException : public std::exception {
            public :
                const char * what() const throw();
        };

};

std::ostream & operator << (std::ostream &out , Bureaucrat const & old_obj);

#endif