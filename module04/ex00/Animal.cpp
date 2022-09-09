/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:50:32 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/08 17:47:08 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Constructor called " << std::endl;
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
    std::cout << "Animal sound" << std::endl;
}

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Constructor called " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& new_obj)
{
    this->type = new_obj.type;
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal WrongAnimal::operator=(WrongAnimal const & obj)
{
    this->type = obj.type;
    std::cout << "WrongAnimal Copy assignment operator" << std::endl;
    return *this;
}

std::string     WrongAnimal::getType() const
{
    return (type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}