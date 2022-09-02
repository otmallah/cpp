/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:00:55 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/02 01:00:07 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main ()
{
    Bureaucrat obj("Othman", 60);
    Bureaucrat obj1("raja", 4);
    Bureaucrat obj2("mallah", 8);
    ShrubberyCreationForm a("mimoune");
    PresidentialPardonForm b("minoche");
    RobotomyRequestForm c("wa hassane");
    try
    {
        a.beSigned(obj);
        b.beSigned(obj1);
        b.execute(obj1);
        c.beSigned(obj2);
        c.execute(obj2);
        a.execute(obj);
    }
    catch(ShrubberyCreationForm::GradeTooHighException & e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(ShrubberyCreationForm::GradeTooLowException & e)
    {
        std::cerr << e.what() << '\n';
    }
    //obj.signForm(a);
    //obj.executeForm(a);
    //obj1.signForm(b);
    //obj1.executeForm(b);
    std::cout << "--------------" << std::endl;
    obj2.executeForm(b);
    //obj2.signForm(b);
    std::cout << "--------------";
}