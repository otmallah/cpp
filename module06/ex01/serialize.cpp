/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:00:31 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/08 19:03:07 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t   serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*   deserialize(uintptr_t  raw)
{
    return (reinterpret_cast<Data *>(raw));
}
