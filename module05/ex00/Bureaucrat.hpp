/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:35:38 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/30 23:21:02 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class   Buraucrat {
    
    private :
        std::string name;
        int grade;
    
    public :
        Buraucrat(std::string name1, int numberGrade);
        ~Buraucrat();
        Buraucrat(const Buraucrat& new_obj);
        //Buraucrat& operator = (const Buraucrat& old_obj);
        //Buraucrat& operator << (const Buraucrat& old_obj);
        const std::string    getName();
        int     getGrade();
        void    increment();
        void    decrement();
        class   GradeTooHighException : public std::exception {
            public :
                const char * what() const throw();
        };
        class   GradeTooLowException : public std::exception {
            public :
                const char * what() const throw();
        };

};


#endif