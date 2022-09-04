/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:19:57 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/03 17:26:01 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zom;

    zom = zombieHorde(5, "pook");
    int i = 0;
    while (i < 5)
    {
        zom[i].announce();
        i++;
    }
    delete [] zom;
}
