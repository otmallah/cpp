/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:11:20 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/17 15:34:25 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    int i = 0;
    Animal  *arr[10];
    Cat obj1;
    Cat obj3;
    while (i < 10)
    {
        if (i < 5)
            arr[i] = new Cat();
        else
            arr[i] = new Dog();
        i++;
    }  

    obj1.setBrain("othman0", 0);  
    obj1.setBrain("othman1", 1);  
    obj1.setBrain("othman2", 2);
    obj1.setBrain("othman3", 3);
    obj1.setBrain("othman4", 4);
    obj1.setBrain("othman5", 5);
    obj1.setBrain("othman6", 6);
    
    obj3 = obj1;

    std::cout << obj3.getBrain(0) << std::endl;
    std::cout << obj3.getBrain(1) << std::endl;
    std::cout << obj3.getBrain(2) << std::endl;
    std::cout << obj3.getBrain(3) << std::endl;
    std::cout << obj3.getBrain(4) << std::endl;
    std::cout << obj3.getBrain(5) << std::endl;
    std::cout << obj3.getBrain(6) << std::endl;
    for (int i = 0; i < 10; i++)
    {
        delete arr[i];
    }
    return 0;
}