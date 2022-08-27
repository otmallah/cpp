/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:53:23 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/27 21:49:45 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
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