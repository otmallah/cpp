/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:53:19 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/17 16:57:04 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public A_Animal {
    
    private :
        Brain* brain;
    public :
        Cat();
        ~Cat();
        Cat(const Cat& new_obj);
        Cat&        operator=(const Cat& new_obj);
        void        setBrain(std::string name, int index);
        void        makeSound() ;
        std::string getType();
        std::string getBrain(int index1);
};


#endif