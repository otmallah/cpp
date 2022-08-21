/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:13:45 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/18 13:45:55 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zom1;
    int i = 0;
    
    if (N <= 0)
        return nullptr;
    zom1 = new Zombie[N];
    while (i < N)
    {
        zom1[i].setname(name);
        i++;
    }
    return zom1;
}
