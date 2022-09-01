/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:00:55 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/01 17:38:25 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main ()
{
    
    Form obj("str", 20, 10);
    Bureaucrat obj1("othman", 50);
    try
    {
        obj.beSigned(obj1);
    }
    catch(Form::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(Form::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
    obj1.signForm(obj);
    std::cout << obj;
}