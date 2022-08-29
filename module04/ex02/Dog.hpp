/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:54:19 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/30 00:53:38 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal {
    
    private :
        Brain*  brain;
    public :
        Dog();
        ~Dog();
        Dog(const Dog& new_obj);
        Dog&        operator=(const Dog& new_obj);
        void        makeSound();
        void        setBrainDog(std::string name, int index);
        std::string getType();
        std::string getBrainDog(int index1);

};



#endif