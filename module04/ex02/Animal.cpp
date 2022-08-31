/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:50:32 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/30 00:53:17 by otmallah         ###   ########.fr       */
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

// std::string     Animal::getType() const
// {
//     return (type);
// }

// void    Animal::makeSound() const
// {
//     std::cout << "Animal sound" << std::endl;
// }