/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:18:30 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/22 16:50:55 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
    Harl obj;
    std::string level;;

    if (ac > 2 || ac < 2)
        std::cout << "enter <executable> <level>" << std::endl;
    else
    {
        level = av[1];
        obj.complain(level);        
    }
}