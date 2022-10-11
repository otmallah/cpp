/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:50:32 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/17 17:47:21 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "pook";
    std::cout << "Animal Default Constructor called " << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal(const Animal& new_obj)
{
    this->type = new_obj.type;
    std::cout << "Copy constructor called" << std::endl;
}

Animal Animal::operator=(Animal const & obj)
{
    this->type = obj.type;
    std::cout << "Copy assignment operator" << std::endl;
    return *this;
}

std::string     Animal::getType() const
{
    return (type);
}

void    Animal::makeSound() const
{
    std::cout << this->type << " Animal sound " << std::endl;
}
