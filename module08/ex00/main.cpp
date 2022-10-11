/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:34:50 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/22 21:35:32 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>

int main()
{
    std::vector<int> num;
    num.push_back(150);
    num.push_back(15);
    num.push_back(1500);
    num.push_back(1);
    num.push_back(50);

    try
    {
        easyfind(num, 1500);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " : " << "oops" << std::endl;
    }
}