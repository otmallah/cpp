/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:47:25 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/17 16:54:09 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class A_Animal {
    
    protected :
        std::string type;
    public :
        A_Animal();
        A_Animal& operator=(A_Animal const &obj);
        A_Animal(const A_Animal&) ;
        virtual std::string    getType();
        virtual void    makeSound()  = 0;
        virtual ~A_Animal();
};


#endif