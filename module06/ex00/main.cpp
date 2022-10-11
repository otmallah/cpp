/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:21:26 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/05 20:14:01 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int ac, char **av)
{
    Convert convert;
    int     result;
    int a;
    if (ac < 2 || ac > 2)
    {
        std::cout << "<executable> <value as string>" <<std::endl;
        return 0;
    }
    try
    {
        a = std::stod(av[1]);
    }
    catch(...)
    {
        std::cout << "Char : " << "impossible "<< std::endl;
        std::cout << "int : " << "impossible" << std::endl;
        std::cout << "float :" << "nanf" << std::endl;
        std::cout << "double :" << "nan" << std::endl;;
        return 0;
    } 
    std::string number = av[1];
    result = convert.find_type_of_number(number);
    if (result == 1)
        convert.convert_to_float(number);
    if (result == 2)
        convert.convert_to_double(number);  
    else
        convert.convert_to_another(number);
    convert.display_all_info();
}