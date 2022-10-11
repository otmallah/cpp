/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:54:19 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/17 17:10:22 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
    
    public :
        Dog();
        ~Dog();
        Dog(const Dog&);
        Dog& operator=(const Dog&);
        void    makeSound() const;
        std::string getType() const;

};

class WrongDog : public WrongAnimal {
    
    public :
        WrongDog();
        ~WrongDog();
        WrongDog(const WrongDog&);
        WrongDog& operator=(const WrongDog&);
        void    makeSound() const;
        std::string getType() const;

};

#endif