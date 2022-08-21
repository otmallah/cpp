/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:58:11 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/19 14:03:14 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main(void)
{
    Zombie *test;
    Zombie *test1;
    Zombie *test2;
    
    test = newZombie("ok");
    test1 = newZombie("ok1");
    test2 = newZombie("ok2");
    test->announce();
    test1->announce();
    test2->announce();
    delete test;
    delete test1;
    delete test2;
}