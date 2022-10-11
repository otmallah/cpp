/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:04:49 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/13 15:33:04 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern & new_obj);
        Intern & operator = (const Intern & old_obj);
        Form  *  makeForm(std::string name, std::string target);
        // Form *   makeShruberry(std::string target);
        // Form *   makePresident(std::string target);
        // Form *   makeRobot(std::string target);
};



#endif