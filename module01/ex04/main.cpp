/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 21:15:17 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/20 16:13:31 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "creat_file.hpp"

int main(int ac, char **av)
{
    myFile obj;

    if (ac < 4 || ac > 4)
    {
        std::cout << "just : <filename> , s1 , s2\n";
        return (0);
    }
    obj.add(av[1], av[2], av[3]);    
}
