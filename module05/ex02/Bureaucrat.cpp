/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:46:19 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/18 21:53:21 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor" << std::endl;
}

void    Bureaucrat::signForm(Form const & form)
{
    if (form.getBoolNumber() == true)
        std::cout << this->name << " signed " << form.getName() << std::endl;
    else
        std::cout << this->name << " couldn’t sign " << form.getName() << " because " << form.getBoolNumber() << std::endl;  
}

Bureaucrat::Bureaucrat(std::string name1, int numberGrade):name(name1)
{
    if (numberGrade < 1)
        throw GradeTooHighException();
    if (numberGrade > 150 )
        throw GradeTooLowException();
    else
    {
        this->grade = numberGrade;
    }
    std::cout << "Buraucrat Constructor called" << std::endl;
}

void    Bureaucrat::executeForm(Form const & form)
{
    if (this->grade <= form.getNumberToexecuteForm())
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    else
        std::cout << this->getName() << " can't execute " << form.getName() << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& new_obj):name(new_obj.name)
{
    this->grade = new_obj.grade;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat & old_obj)
{
    this->grade = old_obj.grade;
    return *this;
}

std::ostream & operator << (std::ostream &out ,Bureaucrat const & old_obj)
{
    out << old_obj.getName() << " bureaucrat grade " << old_obj.getGrade() << std::endl;
    return out;
}

void    Bureaucrat::increment()
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

void    Bureaucrat::decrement()
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

int     Bureaucrat::getGrade() const
{
    return (this->grade);
}

std::string Bureaucrat::getName() const
{
    return  (this->name);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Exception : GradeTooHigh ";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Exception : GradeTooLow ";
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}