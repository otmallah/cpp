/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:53:19 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/17 17:09:25 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
    
    public :
        Cat();
        ~Cat();
        Cat(const Cat&);
        Cat& operator=(const Cat&);
        void    makeSound() const;
        std::string     getType() const;

};

class WrongCat : public WrongAnimal
{
    public :
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat&);
        WrongCat& operator=(const WrongCat&);
        void    makeSound() const;
        std::string     getType() const;
};

#endif