/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:59:13 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/23 17:08:57 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phone;
    std::string str;

    while (1 && !std::cin.eof())
    {
        std::cout << "Enter the command : ";
        getline(std::cin, str);
        if (str == "ADD")
        {
            phone.ADD();
            if (phone.check == 1)
                phone.i++;
            if (phone.count < 8)
                phone.count = phone.i;
        }
        else if (str == "SEARCH")
            phone.SEARCH();
        else if (str == "EXIT")
            return (0);
    }   
}
