/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:13:24 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/06 20:46:39 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


struct Data
{
    int a;
    int b;
    char c;
};

uintptr_t   serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*   deserialize(uintptr_t  raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    Data        data;
    Data        *data1;
    uintptr_t   number;

    data.a = 20;
    data.b = 200;
    data.c = 'c';
    std::cout << "Data before casting " << std::endl;
    std::cout << "address of data   = " << &data << std::endl; 
    std::cout << "a                 = " << data.a << std::endl;
    std::cout << "b                 = " << data.b << std::endl;
    std::cout << "c                 = " << data.a << std::endl;
    number = serialize(&data);
    data1 = deserialize(number);
    std::cout << "Data after casting " << std::endl;
    std::cout << "address of data   = " << data1 << std::endl; 
    std::cout << "a                 = " << data1->a << std::endl;
    std::cout << "b                 = " << data1->b << std::endl;
    std::cout << "c                 = " << data1->a << std::endl;
}
