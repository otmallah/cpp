/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:08:05 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/18 21:56:52 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():NumberTosignedForm(0),NumberToexecuteForm(0)
{
    BoolNumber = false;
}

Form& Form::operator=(const Form& obj)
{
    this->BoolNumber = obj.BoolNumber;
    return *this;
}

Form::Form(const std::string name1, const int numS, const int numE):name(name1),NumberTosignedForm(numS),NumberToexecuteForm(numE)
{
    this->BoolNumber = false;
    if (NumberTosignedForm < 1)
        throw GradeTooHighException();
    if (NumberTosignedForm > 150 )
        throw GradeTooLowException();
    if (NumberToexecuteForm < 1)
        throw GradeTooHighException();
    if (NumberToexecuteForm > 150 )
        throw GradeTooLowException();
    std::cout << "Form Constructor called" << std::endl;
}

Form::Form(const Form& new_obj):name(new_obj.name),NumberTosignedForm(new_obj.NumberTosignedForm),NumberToexecuteForm(new_obj.NumberToexecuteForm)
{
    this->BoolNumber = new_obj.BoolNumber;
}

Form::~Form()
{
    std::cout << "Destructor called " << std::endl;
}

const std::string     Form::getName() const
{
    return this->name;
}

bool        Form::getBoolNumber() const
{
    return this->BoolNumber;
}

int   Form::getNumberToexecuteForm() const
{
    return this->NumberToexecuteForm;
}

int   Form::getNumbertTosignedForm() const
{
    return this->NumberTosignedForm;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Form Exception : GradeTooHigh ";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Form Exception : GradeTooLow ";
}

void    Form::beSigned(Bureaucrat bureaucrat)
{
    if (bureaucrat.getGrade() <= NumberTosignedForm)
        BoolNumber = true;
    else
        throw GradeTooLowException();
}

std::ostream & operator << (std::ostream &out ,Form const & old_obj)
{
    out << "Name " << old_obj.getName() <<" Numbertosigned " << old_obj.getNumbertTosignedForm() << " signe " << old_obj.getBoolNumber() << std::endl;
    return out;
}