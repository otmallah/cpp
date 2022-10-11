/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:53:23 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/17 17:09:19 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat&    Cat::operator=(const Cat & obj)
{
    this->type = obj.type;
    std::cout << "Cat copy assignement operator" << std::endl;
    return *this;
}

Cat::Cat(const Cat & obj)
{
    this->type = obj.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat descturtor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "meaww meaww meaww" << std::endl;
}

std::string Cat::getType() const
{
    return this->type;
}


WrongCat::WrongCat()
{
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

WrongCat&    WrongCat::operator=(const WrongCat & obj)
{
    this->type = obj.type;
    std::cout << "Cat copy assignement operator" << std::endl;
    return *this;
}

WrongCat::WrongCat(const WrongCat & obj)
{
    this->type = obj.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Cat descturtor called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "meaww meaww meaww" << std::endl;
}

std::string WrongCat::getType() const
{
    return this->type;
}
