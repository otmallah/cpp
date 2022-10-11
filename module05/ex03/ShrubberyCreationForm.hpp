/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:48:11 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/18 22:00:00 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class   ShrubberyCreationForm : public Form 
{
    private :
        std::string target;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string name);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm & new_obj);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
        void    execute(Bureaucrat const & executor) const;
        std::string     getTarget();
};


#endif