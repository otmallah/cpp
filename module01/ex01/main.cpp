/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:19:57 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/04 11:45:20 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zom;

    zom = zombieHorde(1, "pook");
    int i = 0;
    while (i < 1)
    {
        zom[i].announce();
        i++;
    }
    delete [] zom;
}
