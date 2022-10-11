/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:50:11 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/18 21:57:56 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

class PresidentialPardonForm : public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string name);
        PresidentialPardonForm& operator = (const PresidentialPardonForm&);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &);
        void            execute(Bureaucrat const & executor) const;
        std::string     getTarget();
};

#endif