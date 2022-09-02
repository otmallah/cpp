/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:41:46 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/02 00:51:48 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name):Form(name, 45, 72)
{
    this->target = name;
    std::cout << "Constructor Called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor called" << std::endl;
}

std::string     RobotomyRequestForm::getTarget()
{
    return this->target;
}

void        RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getBoolNumber() == true && executor.getGrade() <= this->getNumberToexecuteForm())
        std::cout << this->target << " has been robotomized successfully 50'%' of the time " << std::endl;
    else
        throw GradeTooHighException();
}