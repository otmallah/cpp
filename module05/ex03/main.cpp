/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:00:55 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/18 22:03:01 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


int main ()
{
    Intern someRandomIntern;
    Bureaucrat o("othman", 1);
    Form* rrf;
    Form* rrf1;
    Form* rrf2;
    rrf1 = someRandomIntern.makeForm("robotomy request", "othman");
    rrf = someRandomIntern.makeForm("presidential pardonForm", "Bender");
    rrf2 = someRandomIntern.makeForm("shrubbery creationForm", "raajja");
    std::cout << "test : " <<rrf->getName() << std::endl;
    std::cout << rrf1->getName() << std::endl;
    std::cout << rrf2->getName() << std::endl;
    try
    {
        rrf2->beSigned(o);
        rrf2->execute(o);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}