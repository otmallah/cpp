/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:40:49 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/17 22:44:00 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*     newZombie(std::string name)
{
    Zombie *newZombie;

    newZombie = new Zombie();
    newZombie->setname(name);
    return newZombie;
}