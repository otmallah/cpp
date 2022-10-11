/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:12:45 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/11 22:10:34 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap obj("POOOK");

    obj.attack("minouche");
    obj.takeDamage(10);
    obj.attack("minouche");
}