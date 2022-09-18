/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:00:55 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/18 21:38:12 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main ()
{
    
    try
    {
        Form obj("str", 20, 10);
        Bureaucrat obj1("othman", 21);
        obj1.signForm(obj);
        obj.beSigned(obj1);
        std::cout << obj;
    }
    catch(Form::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(Form::GradeTooHighException& e)
    {
        std::cerr << "e.what()" << '\n';
    }
    catch(Bureaucrat::GradeTooLowException &e1)
    {
        std::cerr << e1.what() << '\n';
    }
    catch( Bureaucrat::GradeTooHighException &e1)
    {
        std::cerr << e1.what() << '\n';
    }
}