/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:55:10 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/08 17:08:46 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>void    print(T n)
{
    std::cout << n << std::endl;
}

template<typename T> void   iter(T arr[], int length, void (*f)(T))
{
    if (length <= 0)
        std::cout << "enter valide size";
    for (int i = 0; i < length; i++)
    {
        f(arr[i]);
    }
}

#endif