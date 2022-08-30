/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:46:19 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/30 23:30:21 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Buraucrat::Buraucrat(std::string name1, int numberGrade)
{
    if (numberGrade < 1)
        throw "error";
    else
    {
        this->grade = numberGrade;
        this->name = name1;
    }
    std::cout << "Buraucrat Constructor called\n" << std::endl;
}

// Buraucrat& Buraucrat::operator = (const Buraucrat& old_obj)
// {
//     *(this->name) = *(old_obj.name);
// }

int     Buraucrat::getGrade()
{
    return (this->grade);
}

const   std::string Buraucrat::getName()
{
    return  (this->name);
}

const char* Buraucrat::GradeTooHighException::what() const throw()
{
    return "Exception : GradeTooHigh ";
}

const char* Buraucrat::GradeTooLowException::what() const throw()
{
    return "Exception : GradeTooLow ";
}

Buraucrat::~Buraucrat()
{
    std::cout << "Destructor called" << std::endl;
}