/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:18:42 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/10 14:46:13 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(5);
    numbers[0] = 20;
    numbers[1] = 30;
    numbers[2] = 40;

    try
    {
        numbers[20] = 20;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    Array<int> obj = numbers;
    Array<int> tmp(obj);
    obj.get();
    std::cout << "----****-----" << std::endl;
    tmp.get();
}