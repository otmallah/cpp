/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:59:23 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/27 21:49:52 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
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