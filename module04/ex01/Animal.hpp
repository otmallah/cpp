/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:47:25 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/08 17:47:56 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    
    protected :
        std::string type;
    public :
        Animal();
        Animal operator=(Animal const & obj);
        Animal(const Animal& new_obj);
        virtual std::string    getType() const;
        virtual void    makeSound() const;
        virtual ~Animal();
};

class WrongAnimal 
{
    protected :
        std::string type;
    public :
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal operator=(WrongAnimal const & obj);
        WrongAnimal(const WrongAnimal& new_obj);
        std::string    getType() const;
        void    makeSound() const;
};


#endif