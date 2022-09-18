/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:41:45 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/18 21:58:41 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"


class RobotomyRequestForm : public Form
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm&);
        RobotomyRequestForm(std::string name);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm & new_obj);
        void            execute(Bureaucrat const & executor) const ;
        std::string    getTarget();
};




#endif