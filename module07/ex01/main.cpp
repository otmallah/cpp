/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 22:37:41 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/09 17:01:06 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main()
{
    int arr[] = {20,50,9};
    std::string string[3] = {"slama", "helel", "hello"};
    iter(arr, 3, &print);
    std::cout << "array of string" << std::endl;
    iter(string, 3, &print);
}
