/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:45:05 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/02 22:37:59 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : weap()
{
    // weap = nullptr;
    std::cout << "Default Distructor called" << std::endl;
}

void    HumanB::attack()
{
    if (!weap)
        std::cout << "la waaalo maansibch " << std::endl;
    else
        std::cout << this->name << " attacks with their " << weap->getType() << std::endl;
}

HumanB::HumanB(std::string str)
{
    this->name = str;
}

void    HumanB::setWeapon(Weapon *weap)
{
    this->weap = weap;
}