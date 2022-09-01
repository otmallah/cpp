/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:35:38 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/01 15:00:12 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class   Buraucrat {
    
    private :
        const std::string name;
        int grade;
    
    public :
        Buraucrat(const std::string name1, int numberGrade);
        ~Buraucrat();
        Buraucrat(const Buraucrat& new_obj);
        Buraucrat& operator = (const Buraucrat& old_obj);
        std::string    getName() const;
        int     getGrade() const;
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
std::ostream & operator << (std::ostream &out , Buraucrat const & old_obj);

#endif