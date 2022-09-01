/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:46:19 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/01 14:56:02 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Buraucrat::Buraucrat(std::string name1, int numberGrade):name(name1)
{
    if (numberGrade < 1)
        throw GradeTooHighException();
    if (numberGrade > 150 )
        throw GradeTooLowException();
    else
    {
        this->grade = numberGrade;
    }
    std::cout << "Buraucrat Constructor called\n" << std::endl;
}

Buraucrat::Buraucrat(const Buraucrat& new_obj):name(new_obj.name)
{
    this->grade = new_obj.grade;
}

Buraucrat & Buraucrat::operator = (const Buraucrat & old_obj)
{
    this->grade = old_obj.grade;
    return *this;
}

std::ostream & operator << (std::ostream &out ,Buraucrat const & old_obj)
{
    out << old_obj.getName() << " bureaucrat grade " << old_obj.getGrade() << std::endl;
    return out;
}

void    Buraucrat::increment()
{
    int number;
    number = grade - 1;
    if (number < 1)
        throw GradeTooHighException();
    if (number > 150)
        throw GradeTooLowException();
    else
        grade--;
}    

void    Buraucrat::decrement()
{
    int number;
    number = grade + 1;
    if (number < 1)
        throw GradeTooHighException();
    if (number > 150)
        throw GradeTooLowException();
    else
        grade++;
}

int     Buraucrat::getGrade() const
{
    return (this->grade);
}

std::string Buraucrat::getName() const
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