/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:56:43 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/07 22:11:41 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T &a, T &b)
{
    T saver;
    saver = a;
    a = b;
    b = saver;
}

template <typename S> S min(S a, S b)
{
    if (a > b)
        return b;
    if (a < b)
        return a;
    return b;
}

template <typename S> S max(S a, S b)
{
    if (a > b)
        return a;
    if (a < b)
        return b;
    return b;
}

#endif