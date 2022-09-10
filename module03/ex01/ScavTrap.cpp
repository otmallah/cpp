/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:32:12 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/10 22:01:06 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ):ClapTrap(name)
{
    std::cout << "ScavTrap constructore called " << std::endl;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap Destructor called";
}

void    ScavTrap::attack( const std::string& target)
{
    if (this->Hit_points == 0 || this->Energy_points == 0)
        std::cout << "ScavTrap can't do nothing!" << std::endl;
    else
    {
        this->Energy_points--;
        std::cout << "ScavTrap " << this->name << " attacks "  << target << "v, causing " << this->Attack_damage << " points of damage!" << std::endl;
    }
}

void    ScavTrap::guardGate()
{
    std::cout << " ScavTrap is now in Gate keeper mode " << std::endl;
}