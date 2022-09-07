/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:07:12 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/05 18:23:41 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Destructor Called" << std::endl;
}

Form *   Intern::makeShruberry(std::string target)
{
    Form * form;

    Bureaucrat bureau("Othman", 5);
    ShrubberyCreationForm * shrubbery;
    shrubbery = new ShrubberyCreationForm(target);
    shrubbery->beSigned(bureau);
    shrubbery->execute(bureau);
    bureau.executeForm(*shrubbery);
    form = shrubbery;
    std::cout << "Intern creates" << form->getName() << std::endl;
    return form;
}

Form *   Intern::makePresident(std::string target)
{
    Form * form;

    Bureaucrat bureau("Othman1", 5);
    PresidentialPardonForm *president;
    president = new PresidentialPardonForm(target);
    president->beSigned(bureau);
    president->execute(bureau);
    bureau.executeForm(*president);
    form = president;
    std::cout << "Intern creates" << form->getName() << std::endl;
    return form;
}

Form *   Intern::makeRobot(std::string target)
{
    Form * form;
    std::cout << "/*/**/*/*/*/*/*/*/*/*/**/*/*/*/*/*/*/*/*/*/*/*/*/\n";
    Bureaucrat bureau("Othman1", 5);
    RobotomyRequestForm *Robot;
    Robot = new RobotomyRequestForm(target);
    Robot->beSigned(bureau);
    //Robot->execute(bureau);
    //bureau.executeForm(*Robot);
    form = Robot;
    std::cout << "Intern creates" << form->getName() << std::endl;
    return form;
}

Form * Intern::makeForm(std::string name, std::string target)
{
    std::string name1[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    Form * form = NULL;
    int  i  = 0;

    while (i < 3)
    {
        if (name1[i].compare(name) == 0)
            break;
        i++;
    }
    switch (i)
    {
    case 0:
        form = this->makePresident(target);
        break;
    case 1:
        form = this->makeRobot(target);
        break;
    case 2:
        form = this->makeShruberry(target);
        break;
    default:
        break;
    }
    return form;
}