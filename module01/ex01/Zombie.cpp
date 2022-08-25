/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:02:23 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/25 17:27:50 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "zombie " << this->name << " has destroyed!" << std::endl;
}

void    Zombie::setname(std::string name1)
{
    this->name = name1;
}
