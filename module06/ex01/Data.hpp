/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:01:19 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/08 19:02:35 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

struct Data
{
    int a;
    int b;
    char c;
};

uintptr_t   serialize(Data* ptr);
Data*   deserialize(uintptr_t  raw);

#endif