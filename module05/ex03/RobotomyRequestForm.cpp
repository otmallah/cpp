/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:41:46 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/18 21:58:20 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
{
    *this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    this->target = obj.target;
    return *this;
}

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
    srand(time(NULL));
    if (this->getBoolNumber() == true && executor.getGrade() <= this->getNumberToexecuteForm())
    {
        if (rand() % 2 == 1)
            std::cout << this->target << " has been robotomized successfully" << std::endl;
        else
            std::cout << "RobotomyRequestForm failed" << std::endl;
    }
    else
        throw GradeTooHighException();
}