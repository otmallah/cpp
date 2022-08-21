/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:46:02 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/16 10:46:03 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    j = 1;
    if (ac > 1)
    {
        while (av[j])
        {
            while (av[j][i])
            {
                std::cout << (char)toupper(av[j][i]);
                i++;
            }
            i = 0;
            if (av[j + 1] != NULL)
                printf(" ");
            j += 1;
        }
        std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}
