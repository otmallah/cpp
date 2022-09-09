/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:53:23 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/08 17:55:49 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->brain = new Brain();
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    delete brain;
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

Cat::Cat(const Cat& new_obj)
{
    this->brain = new_obj.brain;
}

Cat& Cat::operator = (const Cat& new_obj)
{
    int i = 0;
    while (i < 100)
    {
        this->brain->setIdeas(new_obj.brain->getIdeas(i), i);
        i++;
    }
    return *this;
}

void    Cat::setBrain(std::string name, int index)
{
    this->brain->setIdeas(name, index);
}

std::string     Cat::getBrain(int index1)
{
    if (index1 >= 0 && index1 < 100)
        return (this->brain->getIdeas(index1));
    else
    {
        std::cout << "Out of range " << std::endl;
        exit(0);
    }
}

// ------ Wrong Cat ------- 

WrongCat::WrongCat()
{
    this->brain = new Brain();
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    delete brain;
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

WrongCat::WrongCat(const WrongCat& new_obj)
{
    this->brain = new_obj.brain;
}

WrongCat& WrongCat::operator = (const WrongCat& new_obj)
{
    int i = 0;
    while (i < 100)
    {
        this->brain->setIdeas(new_obj.brain->getIdeas(i), i);
        i++;
    }
    return *this;
}

void    WrongCat::setBrain(std::string name, int index)
{
    this->brain->setIdeas(name, index);
}

std::string     WrongCat::getBrain(int index1)
{
    if (index1 >= 0 && index1 < 100)
        return (this->brain->getIdeas(index1));
    else
    {
        std::cout << "Out of range " << std::endl;
        exit(0);
    }
}