/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 21:25:06 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/26 21:43:55 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap ( std::string name ):ClapTrap(name)
{
    std::cout << "FragTrap constructor called " << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap ";
    ClapTrap::~ClapTrap();
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

void    FragTrap::highFivesGuys(void)
{
    std::cout << " positive high fives request " << std::endl;
}