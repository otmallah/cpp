/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 21:44:49 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/11 22:07:23 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name)
{
    this->name = name;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    std::cout << "ClapTrap Constructore called " << std::endl;
}

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default Constructore called " << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor Called" << std::endl;
}

void    ClapTrap::attack( const std::string& target)
{
    if (this->Hit_points <= 0 || this->Energy_points <= 0)
        std::cout << "ClapTrap can't do nothing!" << std::endl;
    else
    {   
        this->Energy_points--;
        std::cout << "ClapTrap " << this->name << " attacks "  << target << "v, causing " << this->Attack_damage << " points of damage!" << std::endl;
    }
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    this->name = obj.name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& obj)
{
    this->name = obj.name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
    return *this;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    this->Hit_points = this->Hit_points - amount;
    std::cout << "ClapTrap " << this->name << " takeDmage "  << amount << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount)
{
    if (this->Energy_points <= 0 || this->Hit_points <= 0)
        std::cout << "ClapTrap can't do nothing!" << std::endl;
    else
    {
        this->Hit_points += amount;
        this->Energy_points--;
        std::cout << "ClapTrap " << this->name << " Repaired "  << amount << ", ADD in Hits points" <<  std::endl;
    }
}