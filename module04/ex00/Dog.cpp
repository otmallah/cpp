/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:59:23 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/17 17:10:58 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog&    Dog::operator=(const Dog & obj)
{
    this->type = obj.type;
    std::cout << "Dog copy assignement operator" << std::endl;
    return *this;
}

Dog::Dog(const Dog & obj)
{
    this->type = obj.type;
    std::cout << "Dog copy constructor called" << std::endl;
}


Dog::~Dog()
{
    std::cout << "Dog descturtor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "haww haaw haaw" << std::endl;
}

std::string Dog::getType() const
{
    return this->type;
}


WrongDog::WrongDog()
{
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

WrongDog&    WrongDog::operator=(const WrongDog & obj)
{
    this->type = obj.type;
    std::cout << "Dog copy assignement operator" << std::endl;
    return *this;
}

WrongDog::WrongDog(const WrongDog & obj)
{
    this->type = obj.type;
    std::cout << "Dog copy constructor called" << std::endl;
}


WrongDog::~WrongDog()
{
    std::cout << "Dog descturtor called" << std::endl;
}

void    WrongDog::makeSound() const
{
    std::cout << "haww haaw haaw" << std::endl;
}

std::string WrongDog::getType() const
{
    return this->type;
}