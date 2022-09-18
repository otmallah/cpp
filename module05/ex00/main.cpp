/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:00:55 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/18 21:15:01 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    //Buraucrat obj("othman", 20);
    try
    {
        Bureaucrat obj("Othman", 1500);
        obj.decrement();
        obj.increment();
        std::cout << obj;
    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
    //std::cout << obj;
}