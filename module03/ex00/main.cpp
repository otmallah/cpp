/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:12:45 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/26 16:03:52 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrack = ClapTrap(" LEGEND ");

    claptrack.attack("POOK");
    claptrack.takeDamage(10);
    claptrack.beRepaired(200);
}