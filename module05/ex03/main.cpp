/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:00:55 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/02 19:54:41 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


int main ()
{
    Intern someRandomIntern;
    Form* rrf;
    Form* rrf1;
    Form* rrf2;
    rrf1 = someRandomIntern.makeForm("ShrubberyCreationForm", "othman");
    rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
    rrf2 = someRandomIntern.makeForm("RobotomyRequestForm", "raajja");
    std::cout << "test : " <<rrf->getName() << std::endl;
    std::cout << rrf1->getName() << std::endl;
    std::cout << rrf2->getName() << std::endl;
    // system("leaks a.out");
}