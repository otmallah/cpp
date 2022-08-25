/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:34:47 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/23 09:39:30 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType()
{
    return this->type;
}

void    Weapon::setType(std::string name)
{
    this->type = name;
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}