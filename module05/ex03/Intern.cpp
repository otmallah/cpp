/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 01:26:17 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/02 01:48:01 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor called" << std::endl;
}

Form * Intern::makeForm(std::string name, std::string target)
{
    Form *test;
    PresidentialPardonForm test1(target);
    test = &test1;
    if (name == "PresidentialPardonForm")
    {
        std::cout << "Intern creates " << name << std::endl;
    }
    return test;
}