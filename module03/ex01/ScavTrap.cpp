/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:32:12 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/11 22:21:32 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ):ClapTrap(name)
{
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 30;
    std::cout << "ScavTrap constructor called " << std::endl;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap Destructor called " << std::endl;
}

void    ScavTrap::attack( const std::string& target)
{
    if (this->Energy_points <= 0 || this->Hit_points <= 0)
        std::cout << "ScavTrap can't do nothing!" << std::endl;
    else
    {
        this->Energy_points--;
        std::cout << "ScavTrap " << this->name << " attacks "  << target << "v, causing " << this->Attack_damage << " points of damage!" << std::endl;
    }
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
    this->name = obj.name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& obj)
{
    this->name = obj.name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
    return *this;
}


void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode " << std::endl;
}