/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:00:55 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/31 12:28:53 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    Buraucrat obj("othman", 20);
    try
    {
        Buraucrat obj("Othman", 2);
        obj.increment();
        obj.increment();
        std::cout << obj.getGrade();
    }
    catch(Buraucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(Buraucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << obj;
}