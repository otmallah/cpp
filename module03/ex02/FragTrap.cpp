/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 21:25:06 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/10 22:00:21 by otmallah         ###   ########.fr       */
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

void    FragTrap::highFivesGuys(void)
{
    std::cout << " positive high fives request " << std::endl;
}