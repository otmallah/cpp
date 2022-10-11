/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:50:32 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/17 16:53:44 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

A_Animal::A_Animal()
{
    std::cout << "Animal Constructor called " << std::endl;
}

A_Animal::~A_Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}

A_Animal::A_Animal(const A_Animal& obj)
{
    this->type = obj.type;
    std::cout << "Animal copy constructor" << std::endl;
}

A_Animal& A_Animal::operator=(A_Animal const &obj)
{
    this->type = obj.type;
    return *this;
}

std::string     A_Animal::getType()
{
    return type;
}