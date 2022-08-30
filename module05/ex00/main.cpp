/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:00:55 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/30 23:34:21 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class t {
    public:
    class te : public std::exception
    {
        public :
            const char* what() const throw()
            {
                return "ldkncdfnv";
            }
    };
};


int main ()
{
    try
    {
        throw    Buraucrat obj("Othman", 1;
    }
    catch(Buraucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << obj.getGrade() << std::endl;    
}