/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:35:13 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/25 17:26:32 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name <<  " has destroyed" << std::endl;
}

void    Zombie::setname(std::string name1)
{
    this->name = name1;
}

void    Zombie::announce()
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ" << std::endl;
}