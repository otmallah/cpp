/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:13:45 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/04 11:44:41 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zom1;
    int i = 0;
    
    if (N <= 0)
    {
        std::cerr << "invalid number" << std::endl;
        std::exit(0);
    }
    zom1 = new Zombie[N];
    while (i < N)
    {
        zom1[i].setname(name);
        i++;
    }
    return zom1;
}
