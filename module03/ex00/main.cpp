/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:12:45 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/26 21:58:28 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrack("LEGEND");
    ClapTrap trap("Zelda");
    claptrack.attack("Zelda");
    trap.takeDamage(10);
    trap.beRepaired(200);
}