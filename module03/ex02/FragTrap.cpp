/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 21:25:06 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/11 22:19:39 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap ( std::string name ):ClapTrap(name)
{
    this->name = name;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
    std::cout << "FragTrap constructor called " << std::endl;
}

void    FragTrap::attack( const std::string& target)
{
    if (this->Hit_points == 0 || this->Energy_points == 0)
        std::cout << "FragTrap can't do nothing!" << std::endl;
    else
    {   
        this->Energy_points--;
        std::cout << "FragTrap " << this->name << " attacks "  << target << "v, causing " << this->Attack_damage << " points of damage!" << std::endl;
    }
}

FragTrap::FragTrap(const FragTrap& obj)
{
    this->name = obj.name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
}

FragTrap& FragTrap::operator = (const FragTrap& obj)
{
    this->name = obj.name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << " positive high fives request " << std::endl;
}