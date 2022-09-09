/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:47:25 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/08 18:45:27 by otmallah         ###   ########.fr       */
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
        const A_Animal& operator=(A_Animal const &obj);
        A_Animal(const A_Animal& new_obj) ;
        virtual std::string    getType() = 0;
        virtual void    makeSound()  = 0;
        virtual ~A_Animal();
};


#endif