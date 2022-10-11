/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:07:12 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/18 22:01:13 by otmallah         ###   ########.fr       */
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


Form * Intern::makeForm(std::string name, std::string target)
{
    std::string name1[3] = {"presidential pardonForm", "robotomy request", "shrubbery creationForm"};
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
        return new PresidentialPardonForm(target);
        break;
    case 1:
        return new RobotomyRequestForm(target);
        break;
    case 2:
        return new ShrubberyCreationForm(target);
        break;
    default:
        break;
    }
    return form;
}