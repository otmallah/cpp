/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:54:19 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/08 17:57:42 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    
    private :
        Brain*  brain;
    public :
        Dog();
        ~Dog();
        Dog(const Dog& new_obj);
        Dog&        operator=(const Dog& new_obj);
        void        makeSound() const;
        void        setBrainDog(std::string name, int index);
        std::string getType() const;
        std::string getBrainDog(int index1);

};

class WrongDog : public WrongAnimal {
    
    private :
        Brain*  brain;
    public :
        WrongDog();
        ~WrongDog();
        WrongDog(const WrongDog& new_obj);
        WrongDog&        operator=(const WrongDog& new_obj);
        void        makeSound() const;
        void        setBrainDog(std::string name, int index);
        std::string getType() const;
        std::string getBrainDog(int index1);

};

#endif