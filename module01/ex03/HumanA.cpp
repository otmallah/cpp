/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:41:11 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/23 09:39:17 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << weap.getType() << std::endl;
}

HumanA::HumanA(std::string str, Weapon& weap1):weap(weap1)
{
    this->name = str;
}
