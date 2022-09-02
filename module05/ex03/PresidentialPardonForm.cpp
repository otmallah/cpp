/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:51:33 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/02 00:44:56 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string name):Form(name, 5, 25)
{
    this->target = name;
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

std::string     PresidentialPardonForm::getTarget()
{
    return this->target;
}

void     PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getBoolNumber() == true && executor.getGrade() <= this->getNumberToexecuteForm())
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    else
        throw GradeTooHighException();
}