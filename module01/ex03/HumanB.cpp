/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:45:05 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/02 16:26:49 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    weap = nullptr;
}

void    HumanB::attack()
{
    std::cout << this->name << " attacks with their " << weap->getType() << std::endl;
}

HumanB::HumanB(std::string str)
{
    this->name = str;
}

void    HumanB::setWeapon(Weapon *weap)
{
    std::cout << "lskkdjc";
    this->weap = weap;
}