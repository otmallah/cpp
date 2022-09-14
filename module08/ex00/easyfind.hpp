/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:25:36 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/14 11:20:23 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP_
#define _EASYFIND_HPP_

#include <iostream>
#include <vector>

template<typename T> void easyfind(T a, int num)
{
    typename T::iterator found;
    found = find(a.begin(), a.end(), num);
    if (found == a.end())
        throw std::exception();
    std::cout << "yes we find : " << *found << std::endl;
}

#endif