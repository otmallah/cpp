/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:59:23 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/17 17:47:08 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->brain = new Brain();
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    delete brain;
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

Dog& Dog::operator = (const Dog& new_obj)
{
    delete brain;
    this->brain = new Brain();
    int i = 0;
    while (i < 100)
    {
        this->brain->setIdeas(new_obj.brain->getIdeas(i), i);
        i++;
    }
    return *this;
}

Dog::Dog(const Dog& new_obj)
{
    this->brain = new_obj.brain;
}

void    Dog::setBrainDog(std::string name, int index)
{
    this->brain->setIdeas(name, index);
}

std::string     Dog::getBrainDog(int index1)
{
    return (this->brain->getIdeas(index1));
}
